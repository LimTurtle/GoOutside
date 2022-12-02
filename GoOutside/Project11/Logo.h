#pragma once
#include "StateObj.h"

class Logo : public StateObj
{
private:
	const char*logoImg[25];
	void AniImg00();
	void AniImg01();
	void AniImg02();
	void AniImg03();
	void AniImg04();
	void AniImg05();
	void AniImg06();
	void AniImg07();
	void AniImg08();
	void AniImg09();
	void AniImg10();
	void AniImg11();
	void AniImg12();
	void AniImg13();
	void AniImg14();
	void AniImg15();
	void AniImg16();
	void AniImg17();
	void AniImg18();
	void AniImg19();
	void AniImg20();
	void AniImg21();
	void AniImg22();
	void AniImg23();
	void AniImg24();
	void AniImg25();
	void AniImg26();
	void AniImg27();
	void AniImg28();
	void AniImg29();
	int aniNum;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
public:
	Logo();
	~Logo();
};

