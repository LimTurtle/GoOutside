#pragma once
#include "Obj.h"
class CollisionMgr
{
public:
	static bool Collision(Obj*obj1, Obj*obj2)
	{
		if (obj1->GetInfo().act == true && obj2->GetInfo().act == true)
		{
			if (obj1->GetInfo().x <= obj2->GetInfo().x + obj2->GetInfo().cx &&
				obj1->GetInfo().x + obj1->GetInfo().cx >= obj2->GetInfo().x &&
				obj1->GetInfo().y <= obj2->GetInfo().y + obj2->GetInfo().cy &&
				obj1->GetInfo().y + obj1->GetInfo().cy >= obj2->GetInfo().y)
			{
				return true;
			}
		}
		return false;
	}
public:
	CollisionMgr();
	~CollisionMgr();
};

