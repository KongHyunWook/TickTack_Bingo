// TickTack.h : main header file for the TICKTACK application
//

#if !defined(AFX_TICKTACK_H__AEB519D0_51B8_4766_B9B9_39047FDB61D7__INCLUDED_)
#define AFX_TICKTACK_H__AEB519D0_51B8_4766_B9B9_39047FDB61D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTickTackApp:
// See TickTack.cpp for the implementation of this class
//

class CTickTackApp : public CWinApp
{
public:
	CTickTackApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTickTackApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTickTackApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TICKTACK_H__AEB519D0_51B8_4766_B9B9_39047FDB61D7__INCLUDED_)
