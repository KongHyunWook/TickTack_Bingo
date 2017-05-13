// TickTackView.cpp : implementation of the CTickTackView class
//

#include "stdafx.h"
#include "TickTack.h"
#include "TickTackDoc.h"
#include "TickTackView.h"
#include "TickTackDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTickTackView

IMPLEMENT_DYNCREATE(CTickTackView, CView)

BEGIN_MESSAGE_MAP(CTickTackView, CView)
	//{{AFX_MSG_MAP(CTickTackView)
	ON_WM_LBUTTONUP()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTickTackView construction/destruction



CTickTackView::CTickTackView()
{
	ROW_CNT = COL_CNT = Radio_Value = 0;
	Initial();
}

CTickTackView::~CTickTackView()
{
}

/////////////////////////////////////////////////////////////////////////////
// CTickTackView drawing

void CTickTackView::OnDraw(CDC* pDC)
{
	CTickTackDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	 DrawGrid(pDC);
}

void CTickTackView::DrawGrid(CDC * pDC)
{
	for(int r = 0; r < ROW_CNT; r++ )
	{
		for(int c = 0 ; c < COL_CNT; c++ )
		{
			m_bCells[r][c].DrawCell(pDC);
		}
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTickTackView diagnostics

#ifdef _DEBUG
void CTickTackView::AssertValid() const
{
	CView::AssertValid();
}

void CTickTackView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTickTackDoc* CTickTackView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTickTackDoc)));
	return (CTickTackDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTickTackView message handlers

BOOL CTickTackView::SetGridClick(CPoint & point)
{
	for (int r = 0; r < ROW_CNT; r++)
	{
		for (int c = 0; c < COL_CNT; c++)
		{
			if (m_bCells[r][c].isClick(point)) {
				point.x = c;
				point.y = r;
				return TRUE;
			}
		}
	}
	return FALSE;
}

void CTickTackView::OnLButtonUp(UINT nFlags, CPoint point)
{
	if (SetGridClick(point))
	{
		int r = point.y;
		int c = point.x;
		if (m_bCells[r][c].GetClick())
		{
			CClientDC dc(this);
			DrawGrid(&dc);
			
			if (Radio_Value == 0) {
				type.value = CType::X;
				Radio_Value = 1;
			}
			else {
				type.value = CType::O;
				Radio_Value = 0;
			}
			m_bCells[r][c].SetType(type.value);
			m_bCells[r][c].DrawCell(&dc);


			CString str;
			if (OCellBingoCheck()) {
				str = "사용자O Bingo 입니다.";
				int ret = MessageBox(_T(str), MB_OK);
				if (ret == IDOK) {
					Initial();
					Invalidate();
				}
			}
			if (XCellBingoCheck()) {
				str = "사용자X Bingo 입니다.";
				int ret = MessageBox(_T(str), MB_OK);
				if (ret == IDOK) {
					Initial();
					Invalidate();
				}
			}
			
		}
	}
		
	CView::OnLButtonUp(nFlags, point);
}

void CTickTackView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	CRect rectClient;
	GetClientRect(rectClient);

	int nW = rectClient.Width();
	int nH = rectClient.Height();

	if (COL_CNT == 0 || ROW_CNT == 0)
		return;

	int nCellW = nW / COL_CNT;
	int nCellH = nH / ROW_CNT;
	
	int nLeft = 0, nTop = 0;
	for (int r = 0; r < ROW_CNT; r++)
	{
		for (int c = 0; c < COL_CNT; c++)
		{
			m_bCells[r][c].SetPosition(nCellW, nCellH, nLeft, nTop);

			nLeft += nCellW;
		}
		nLeft = 0;
		nTop += nCellH;
	}

}

/*BOOL CTickTackView::BingoCheck()
{
	if (type.IsOType()) {
		return OCellBingoCheck();
	}
	else if (type.IsXType()) {
		return XCellBingoCheck();
	}
	return FALSE;
}*/

BOOL CTickTackView::OCellBingoCheck() {
	int rowCount = 0, ColCount = 0, diagonal = 0, diagonalN = 0;
	for (int r = 0; r<ROW_CNT; r++)
	{
		if (ROW_CNT == COL_CNT)
		{
			rowCount = 0, ColCount = 0;

			if (m_bCells[r][r].GetType().IsOType()) //정 대각선
			{
				diagonal++;
				if (diagonal == ROW_CNT) return TRUE;
			}
			if (m_bCells[r][(ROW_CNT - 1) - r].GetType().IsOType())//역 대각선
			{
				diagonalN++;
				if (diagonalN == ROW_CNT) return TRUE;
			}
		}

		for (int c = 0; c<COL_CNT; c++)
		{
			if (m_bCells[c][r].GetType().IsOType())//행 빙고
			{
				rowCount++;
				if (rowCount == ROW_CNT) return TRUE;
			}
			if (m_bCells[r][c].GetType().IsOType())//열 빙고
			{
				ColCount++;
				if (ColCount == COL_CNT) return TRUE;
			}
		}
	}
	return FALSE;
}

BOOL CTickTackView::XCellBingoCheck() {
	int rowCount = 0, ColCount = 0, diagonal = 0, diagonalN = 0;
	for (int r = 0; r<ROW_CNT; r++)
	{
		if (ROW_CNT == COL_CNT)
		{
			rowCount = 0, ColCount = 0;

			if (m_bCells[r][r].GetType().IsXType())//정 대각선
			{
				diagonal++;
				if (diagonal == ROW_CNT) return TRUE;
			}
			if (m_bCells[r][(ROW_CNT - 1) - r].GetType().IsXType())//역 대각선
			{
				diagonalN++;
				if (diagonalN == ROW_CNT) return TRUE;
			}
		}

		for (int c = 0; c<COL_CNT; c++)
		{
			if (m_bCells[c][r].GetType().IsXType())//행 빙고
			{
				rowCount++;
				if (rowCount == ROW_CNT) return TRUE;
			}
			if (m_bCells[r][c].GetType().IsXType())//열 빙고
			{
				ColCount++;
				if (ColCount == COL_CNT) return TRUE;
			}
		}
	}
	return FALSE;
}

void CTickTackView::Initial()
{
	// 다이얼로그에서 띄움
	CTickTackDlg dlg;
	if (dlg.DoModal() == IDCANCEL)
	{
		AfxGetMainWnd()->PostMessageA(WM_CLOSE);
		return;
	}
	else
	{
		Radio_Value = dlg.m_nStartRadio;
		if (Radio_Value == 0) {
			type.value = CType::X;
		}
		else
		{
			type.value = CType::O;
		}

		//동적할당해제
		if (ROW_CNT > 0 && COL_CNT > 0) {
			for (int c = 0; c < COL_CNT; c++)
				delete[] m_bCells[c];
			delete[] m_bCells;
		}

		//동적할당생성
		const int row = dlg.m_nInputRow;
		const int col = dlg.m_nInputCol;
		this->ROW_CNT = row;
		this->COL_CNT = col;

		m_bCells = new CGridCell*[col];
		for (int c = 0; c < COL_CNT; c++)
			m_bCells[c] = new CGridCell[row];

		for (int r = 0; r < ROW_CNT; r++)
		{
			for (int c = 0; c <COL_CNT; c++)
			{
				m_bCells[r][c].SetClick(FALSE);
				m_bCells[r][c].SetType(CType::NONE);

			}
		}
	}
}
