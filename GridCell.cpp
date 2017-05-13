// GridCell.cpp: implementation of the CGridCell class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TickTack.h"
#include "GridCell.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGridCell::CGridCell()
:m_bClick(FALSE)	
{
	m_nW = m_nW = m_nPointR = m_nPointC = 0;
}

CGridCell::~CGridCell()
{
}

void CGridCell::SetType(CType::Value value)
{
	type.value = value;
}

CType CGridCell::GetType()
{
	return type;
}

void CGridCell::SetPosition(int Width, int Height, int startR, int startC)
{
	m_nW = Width;
	m_nH = Height;
	m_nPointR = startR;
	m_nPointC = startC;
}

void CGridCell::GetPosition(int &nW, int &nH, int &nPointR, int &nPointC)
{
	nW = m_nW;
	nH = m_nH;
	nPointR = m_nPointR;
	nPointC = m_nPointC;
}

void CGridCell::SetClick(bool bClick)
{
	m_bClick = bClick;

}

BOOL CGridCell::GetClick()
{
	return m_bClick;
}

BOOL CGridCell::isClick(CPoint point)
{
	CRect rectCell(m_nPointR, m_nPointC, m_nPointR + m_nW, m_nPointC + m_nH);
	if (rectCell.PtInRect(point))
	{
		if (!GetClick()) 
		{
			SetClick(TRUE);
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	return FALSE;

}

void CGridCell::DrawCell(CDC *pDC)
{
	int nTop = 0, nLeft = 0, nBottom = 0, nRight = 0, nCellW = 0, nCellH = 0;

	GetPosition(nCellW, nCellH, nLeft, nTop);

	nRight = nLeft + nCellW;

	nBottom = nTop + nCellH;

	CRect rectCell(nLeft, nTop, nRight, nBottom);
	pDC->Rectangle(rectCell);

	DrawCellFromType(pDC, nLeft, nTop, nRight, nBottom);
}

void CGridCell::DrawCellFromType(CDC *pDC, int left, int top, int right, int bottom)
{
	if (!GetClick()) {
		return;
	}
	
	type.Draw(pDC, left, top, right, bottom);
	
}