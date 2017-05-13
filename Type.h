#pragma once

class CType
{
public:
	static enum Value {
		NONE, O, X
	};

public:
	Value value;

public:
	BOOL IsOType();
	BOOL IsXType();

	void Draw(CDC *pDC, int left, int top, int right, int bottom);

private:
	void DrawO(CDC *pDC, int left, int top, int right, int bottom);
	void DrawX(CDC *pDC, int left, int top, int right, int bottom);
};
