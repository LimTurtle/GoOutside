#pragma once
#include "Include.h"
class DoubleBuffer
{
private:
	static DoubleBuffer* pInst;
public:
	static DoubleBuffer* GetInst()
	{
		if (pInst == nullptr)
		{
			pInst = new DoubleBuffer;
		}

		return pInst;
	}
private:
	static int screenIndex;
	static HANDLE hBuffer[2];
public:
	void InitDoubleBuffer();
	void WriteBuffer(int x, int y, const char* shape, int color);
	void FlipBuffer();
	void ClearBuffer();
	void DestroyBuffer();
public:
	DoubleBuffer();
	~DoubleBuffer();
};


