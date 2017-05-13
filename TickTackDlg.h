#if !defined(AFX_TICKTACKDLG_H__490F7B69_4B10_485B_94B9_AE55802CD255__INCLUDED_)
#define AFX_TICKTACKDLG_H__490F7B69_4B10_485B_94B9_AE55802CD255__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TickTackDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTickTackDlg dialog

class CTickTackDlg : public CDialog
{
	// Construction
public:
	CTickTackDlg(CWnd* pParent = NULL);   // standard constructor

										  // Dialog Data
										  //{{AFX_DATA(CTickTackDlg)
	enum { IDD = IDD_DIALOG_INPUT };

	int m_nInputRow;
	int m_nInputCol;

	//	CEdit* pEdit_Row;
	//	CEdit* pEdit_Col;

	UINT m_nRadio;
	int m_nStartRadio;
	afx_msg void RadioCtrl(UINT ID);	//Radio Ctrl M_Function
										//}}AFX_DATA
	virtual void OnBnClickedOk();

	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTickTackDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

														//}}AFX_VIRTUAL

														// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTickTackDlg)

	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TICKTACKDLG_H__490F7B69_4B10_485B_94B9_AE55802CD255__INCLUDED_)
