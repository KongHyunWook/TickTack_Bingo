#include "stdafx.h"
#include "Type.h"

BOOL CType::IsOType() 
{
	return (this->value == O);
}

BOOL CType::IsXType() 
{
	return (this->value == X);
}

void CType::Draw(CDC *pDC, int left, int top, int right, int bottom) 
{	
	switch (this->value)
	{
	case O:
		DrawO(pDC, left, top, right, bottom);
		break;
	case X:
		DrawX(pDC, left, top, right, bottom);
		break;
	}
}

void CType::DrawO(CDC *pDC, int left, int top, int right, int bottom)
{
	pDC->Ellipse(left, top, right, bottom);
}

void CType::DrawX(CDC *pDC, int left, int top, int right, int bottom)
{
	pDC->MoveTo(left, top);
	pDC->LineTo(right, bottom);
	pDC->MoveTo(left, bottom);
	pDC->LineTo(right, top);
}
