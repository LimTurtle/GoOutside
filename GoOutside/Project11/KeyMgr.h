#pragma once
#include "include.h"
class KeyMgr
{
private:
	static KeyMgr*pInst;
public :
	static KeyMgr*GetInst()
	{
		if (pInst == nullptr)
		{
			pInst = new KeyMgr;
		}
		return pInst;
	}
private:
	DWORD dKey;
public:
	DWORD GetKey()
	{
		return dKey;
	}
public:
	void CheckKey();
public:
	KeyMgr();
	~KeyMgr();
};

