// TickTackDoc.h : interface of the CTickTackDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TICKTACKDOC_H__5D764651_9FB8_4A1B_AFB5_0136B5AB71EC__INCLUDED_)
#define AFX_TICKTACKDOC_H__5D764651_9FB8_4A1B_AFB5_0136B5AB71EC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTickTackDoc : public CDocument
{
protected: // create from serialization only
	CTickTackDoc();
	DECLARE_DYNCREATE(CTickTackDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTickTackDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTickTackDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTickTackDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TICKTACKDOC_H__5D764651_9FB8_4A1B_AFB5_0136B5AB71EC__INCLUDED_)
