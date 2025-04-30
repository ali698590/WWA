#pragma once
#include "Player.h"


class Undertaker : public Player {
protected:

	int Moves_Energy_Cost[3];
	bool IsShieldReady;

public:

	Undertaker();

	void ability1(Player* targets[2]) override;

	void ability2(Player* targets[2]) override;

	void Finisher(Player* targets[2]) override;

	void ChangeHealth(int h) override;

	void ChangeShieldStatus(bool Activation);



	bool GetIsShieldReady();
};

