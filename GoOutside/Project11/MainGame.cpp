#include "MainGame.h"
#include "StateMgr.h"


void MainGame::Initialize()
{
	DoubleBuffer::GetInst()->InitDoubleBuffer();
	StateMgr::GetInst()->SetState(LOGO);
}

void MainGame::Progress()
{
	DoubleBuffer::GetInst()->FlipBuffer();
	DoubleBuffer::GetInst()->ClearBuffer();
	StateMgr::GetInst()->Progress();
	KeyMgr::GetInst()->CheckKey();
}

void MainGame::Render()
{
	StateMgr::GetInst()->Render();
}

void MainGame::Release()
{
	StateMgr::GetInst()->Release();
}

MainGame::MainGame()
{
}


MainGame::~MainGame()
{
}
