#pragma once
#include "StateObj.h"
class StateMgr
{
private:
	static StateMgr*pInst;
public:
	static StateMgr*GetInst()
	{
		if (pInst == nullptr)
		{
			pInst = new StateMgr;
		}
		return pInst;
	}
private:
	StateObj * pState;
public:
	void SetState(STATE_ID state);
	void Progress();
	void Render();
	void Release();
public:
	StateMgr();
	~StateMgr();
};

