// TickTackDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TickTack.h"
#include "TickTackDlg.h"
#include "TickTackView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTickTackDlg dialog


CTickTackDlg::CTickTackDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTickTackDlg::IDD, pParent), m_nRadio(0)
{
	//{{AFX_DATA_INIT(CTickTackDlg)
	m_nInputRow = 0;
	m_nInputCol = 0;
	m_nStartRadio = 0;
	//}}AFX_DATA_INIT
}


void CTickTackDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTickTackDlg)
	DDX_Text(pDX, IDC_INPUT_ROW, m_nInputRow);
	DDX_Text(pDX, IDC_INPUT_COL, m_nInputCol);
	DDX_Radio(pDX, IDC_RADIO_X, (int&)m_nRadio);

	DDV_MinMaxInt(pDX, m_nInputRow, 3, 10);
	DDV_MinMaxInt(pDX, m_nInputCol, 3, 10);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTickTackDlg, CDialog)
	//{{AFX_MSG_MAP(CTickTackDlg)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_X, IDC_RADIO_O, RadioCtrl)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTickTackDlg message handlers

void CTickTackDlg::OnBnClickedOk()
{
	UpdateData(TRUE);

	m_nInputRow = GetDlgItemInt(IDC_INPUT_ROW);
	m_nInputCol = GetDlgItemInt(IDC_INPUT_COL);
	RadioCtrl(IDC_RADIO_X);

	//pEdit_Row = (CEdit*)GetDlgItemInt(IDC_INPUT_ROW);
	//pEdit_Col = (CEdit*)GetDlgItemInt(IDC_INPUT_COL);
	//pEdit_Row->SetWindowText(_T(" "));
	//pEdit_Col->SetWindowText(_T(" "));




	CDialog::OnOK();
}

void CTickTackDlg::RadioCtrl(UINT ID)
{
	UpdateData(TRUE);

	switch (m_nRadio)
	{
	case 0:
		m_nStartRadio = m_nRadio;
		break;
	case 1:
		m_nStartRadio = m_nRadio;
		break;
	default:
		break;
	}
}

BOOL CTickTackDlg::OnInitDialog()
{
	UpdateData(FALSE);
	return TRUE;
}

