// TickTackView.h : interface of the CTickTackView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TICKTACKVIEW_H__63B3BE92_DD6C_40F3_B74D_B76764C37898__INCLUDED_)
#define AFX_TICKTACKVIEW_H__63B3BE92_DD6C_40F3_B74D_B76764C37898__INCLUDED_

#include "TickTackDoc.h"
#include "GridCell.h"
#include "Type.h"


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#define	ROW_CNT	3
//#define	COL_CNT 3

class CTickTackView : public CView
{
protected: // create from serialization only
	CTickTackView();
	DECLARE_DYNCREATE(CTickTackView)
	int ROW_CNT, COL_CNT;
	int Radio_Value;
	int CheckCnt;

// Attributes
public:
	CTickTackDoc* GetDocument();
	CType type;
	CGridCell **m_bCells;
	
// Operations

public:

	void DrawGrid(CDC * pDC);
	BOOL SetGridClick(CPoint & point);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTickTackView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	void Initial();
	BOOL BingoCheck();
	BOOL OCellBingoCheck();
	BOOL XCellBingoCheck();

	virtual ~CTickTackView();



#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTickTackView)
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TickTackView.cpp
inline CTickTackDoc* CTickTackView::GetDocument()
{ return (CTickTackDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TICKTACKVIEW_H__63B3BE92_DD6C_40F3_B74D_B76764C37898__INCLUDED_)
