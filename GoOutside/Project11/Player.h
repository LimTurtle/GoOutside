#pragma once
#include "Obj.h"

class Player : public Obj
{
private:
	int Player_Ground;
	int _mapNum;
	int life;
private:
	DWORD dwKey;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	Player();
	~Player();
};

