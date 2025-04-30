#pragma once
#include "Player.h"
#include "JohnCena.h"
#include "TheRock.h"
#include "Undertaker.h"
#include <iostream>

using namespace std;


class GameManager
{

protected:

	Player* players[3] = { new JohnCena(), new TheRock(), new Undertaker() };
	Player* JohnCenaEnemys[2] = { players[1], players[2] };
	Player* TheRocknemys[2] = { players[0], players[2] };
	Player* UndertakerEnemys[2] = { players[0], players[1] };
	int AlivesCount;
	int TotalRounds;
	int CurrentRound;
	int CurrentPlayerIndex;
	int DeadPlayersIndex[2];
	int WinnerIndex;
	bool FirstBlood;
	bool Winner;
	void ToNextRound();
	void ShowPlayerInformation(int index);
	void ShowOptions();

public :
	GameManager();

	void run();

};

