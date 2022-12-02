#include "Stage.h"
//#include "Enemy.h"
#include "Player.h"
#include "Item.h"
#include "CollisionMgr.h"

void Stage::Initialize()
{
	
	Map::GetInst()->SelectedMap(0);
	Map::GetInst()->Initialize();
	player = new Player;
	player->Initialize();


	//for (int i = 0; i < EnemyCount; i++)
	//{
	//	enemy[i]=new Enemy;
	//	enemy[i]->Initialize();
	//}

	moreJump = new Item;
	moreJump->Initialize();
}

void Stage::Progress()
{
	player->Progress();
	//for (int i = 0; i < EnemyCount; i++)
	//{
	//	if (enemy[i]->GetInfo().act == true)
	//	{
	//		enemy[i]->Progress();
	//	}
	//}

	if (CollisionMgr::Collision(player, moreJump))
	{
		moreJump->SetInfo(false);
		player->MoreJump(true);
	}
}

void Stage::Render()
{
	player->Render();
	Map::GetInst()->Render();
	//for (int i = 0; i < EnemyCount; i++)
	//{
	//	if (enemy[i]->GetInfo().act == true)
	//	{
	//		enemy[i]->Render();
	//	}
	//}
	moreJump->Render();
}

void Stage::Release()
{
	player->Release();
	//for (int i = 0; i < EnemyCount; i++)
	//{
	//	
	//	enemy[i]->Release();
	//	
	//}
}

Stage::Stage()
{
	
}


Stage::~Stage()
{
	delete player;
	//for (int i = 0; i < EnemyCount; i++)
	//{
	//	delete enemy[i];
	//}
}
