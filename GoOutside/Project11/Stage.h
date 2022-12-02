#pragma once
#include "StateObj.h"
#include "Obj.h"
#include "Map.h"

class Stage : public StateObj
{
private:
	Obj * player;
	Obj * enemy[EnemyCount];
	Obj * moreJump;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	Stage();
	~Stage();
};

