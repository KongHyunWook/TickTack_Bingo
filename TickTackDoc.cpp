// TickTackDoc.cpp : implementation of the CTickTackDoc class
//

#include "stdafx.h"
#include "TickTack.h"
#include "TickTackDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTickTackDoc

IMPLEMENT_DYNCREATE(CTickTackDoc, CDocument)

BEGIN_MESSAGE_MAP(CTickTackDoc, CDocument)
	//{{AFX_MSG_MAP(CTickTackDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTickTackDoc construction/destruction

CTickTackDoc::CTickTackDoc()
{
	// TODO: add one-time construction code here

}

CTickTackDoc::~CTickTackDoc()
{
}

BOOL CTickTackDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTickTackDoc serialization

void CTickTackDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTickTackDoc diagnostics

#ifdef _DEBUG
void CTickTackDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTickTackDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTickTackDoc commands
