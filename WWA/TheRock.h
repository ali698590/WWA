#pragma once
#include "Player.h"

class TheRock: public Player
{
protected:
	int Moves_Energy_Cost[3];
	Player* LastAttacker;
	Player* LastLastAttacker;
	Player* WhoToBetray;

public:

	TheRock();

	void ability1(Player* targets[2]) override;

	void ability2(Player* targets[2]) override;

	void Finisher(Player* targets[2]) override;

	void SetWhoToBetray(Player* p);

	Player* GetLastAttacker();
	Player* GetLastLastAttacker();
	Player* GetWhoToBetray();



};

