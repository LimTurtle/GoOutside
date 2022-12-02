#include "Item.h"
#include "CollisionMgr.h"
#include "Map.h"

void Item::Initialize()
{
	SetInfo(20, 10, "¡×", false);
	info.cx = strlen("¡×")-1;
	info.cy = 0;
}

void Item::Progress()
{
	SetInfo(true);
}

void Item::Render()
{
	
	if (info.act)
	{
		DoubleBuffer::GetInst()->WriteBuffer(info.x, info.y, info.shape, 7);
	}
}

void Item::Release()
{
}

Item::Item()
{
}


Item::~Item()
{
}
