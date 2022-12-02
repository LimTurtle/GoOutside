#pragma once
#include "include.h"
class StateObj
{
protected:
	DWORD dwKey;
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	StateObj();
	~StateObj();
};