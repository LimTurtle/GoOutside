#pragma once
#include "include.h"
class Obj
{
protected:
	INFO info;
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	void SetInfo(int _x, int _y,const char*_shape,bool _act)
	{
		info.x = _x;
		info.y = _y;
		info.shape = _shape;
		info.act = _act;
	}
	void SetInfo(int _x, int _y, bool _act)
	{
		info.x = _x;
		info.y = _y;
		info.act = _act;
	}
	void SetInfo(const char*shape00, const char*shape01, const char*shape02)
	{
		info.BigShape[0] = shape00;
		info.BigShape[1] = shape01;
		info.BigShape[2] = shape02;
	}
	void SetInfo(bool _act)
	{
		info.act = _act;
	}
	INFO GetInfo()
	{
		return info;
	}
	void MoreJump(bool _jump_act)
	{
		info.jump_act = _jump_act;
	}
public:
	Obj();
	~Obj();
};

