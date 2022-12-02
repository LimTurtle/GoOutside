#include "Enemy.h"



void Enemy::Initialize()
{
	SetInfo(0, 0, false);
	SetInfo("a", "b","c");
}

void Enemy::Progress()
{
	int num = rand() % 4;
	switch (num)
	{
	case 0:
		info.y--;
		break;
	case 1:
		info.y++;
		break;
	case 2:
		info.x--;
		break;
	case 3:
		info.x++;
		break;
	default:
		break;
	}
}

void Enemy::Render()
{
	for (int i = 0; i < CharSize; i++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(info.x, info.y+i, info.BigShape[i], ³ë¶õ»ö);
	}
}

void Enemy::Release()
{
}

Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}
