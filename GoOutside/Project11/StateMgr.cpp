#include "StateMgr.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"
#include "Exit.h"
StateMgr*StateMgr::pInst = nullptr;

void StateMgr::SetState(STATE_ID state)
{
	if (pState != nullptr)
	{
		delete pState;
		pState = nullptr;
	}

	switch (state)
	{
	case LOGO:
		pState = new Logo;
		break;
	case MENU:
		pState = new Menu;
		break;
	case STAGE:
		pState = new Stage;
		break;
	case EXIT:
		exit(true);
		break;
	default:
		break;
	}

	pState->Initialize();

}

void StateMgr::Progress()
{
	pState->Progress();
}

void StateMgr::Render()
{
	pState->Render();
}

void StateMgr::Release()
{
	pState->Release();
}

StateMgr::StateMgr()
{
	pInst = nullptr;
}


StateMgr::~StateMgr()
{
}
