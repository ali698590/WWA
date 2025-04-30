#pragma once
#include "Player.h"

class JohnCena :public Player
{
protected:

	int Moves_Energy_Cost[3];
	Player* LastAttacker;
	

public:

	 JohnCena();

	 int Get_Moves_Energy_Cost();
	 void ability1(Player* targets[2]) override;

	 void ability2(Player* targets[2]) override;

     void Finisher(Player* targets[2]) override;

};

