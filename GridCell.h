// GridCell.h: interface for the CGridCell class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRIDCELL_H__3BFEC235_1797_4232_AB30_3F8C8A1F06EB__INCLUDED_)
#define AFX_GRIDCELL_H__3BFEC235_1797_4232_AB30_3F8C8A1F06EB__INCLUDED_

#include "Type.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CGridCell  
{
public:
	CGridCell();
	virtual ~CGridCell();
public:
	BOOL m_bClick;
	int m_nW, m_nH, m_nPointR, m_nPointC;
	CType type;
public:
	void SetType(CType::Value value);
	CType GetType();

	void GetPosition(int &nW, int &nH, int &nPointR, int &nPointC);
	void SetPosition(int Width, int Height, int startR, int startC);
	
	void SetClick(bool bClick);
	BOOL GetClick();
	BOOL isClick(CPoint point);

	void DrawCell(CDC * pDC);
	void DrawCellFromType(CDC * pDC, int left, int top, int right, int bottom);
};

#endif // !defined(AFX_GRIDCELL_H__3BFEC235_1797_4232_AB30_3F8C8A1F06EB__INCLUDED_)
