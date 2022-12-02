#pragma once
#include "StateObj.h"
class Exit : public StateObj
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	Exit();
	~Exit();
};

