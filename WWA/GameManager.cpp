#include "GameManager.h"



GameManager::GameManager() {
	TotalRounds = 3;
	CurrentRound = 1;
	CurrentPlayerIndex = 0;
	AlivesCount = sizeof(players) / sizeof(players[0]);
	FirstBlood = false;
	Winner = false;
	for (int i = 0; i < 2; i++) {
		DeadPlayersIndex[i] = -1;
	}
	WinnerIndex = -1;
}

void GameManager::ToNextRound() {
	cout << "Round" << CurrentRound << "begins!!!!!" << endl;
	for (int i = 0; i < 3; i++) {
		players[i]->ChangeEnergy(10);
		players[i]->ResetRAGE();
	}
	for (int i = 0; i < 3; i++) {
		if (players[i]->Is_Alive()) {
			cout << players[i]->GetName() << "is still alive!!! BOOOOOOMMMMM!!!!!\n";
		}
	}
}

void GameManager::ShowPlayerInformation(int index) {
	
	cout << "Health : " << players[index]->GetHealth() << endl;
	cout << "Energy : " << players[index]->GetEnergy() << endl;
	cout << "RAGE   : " << players[index]->GetRAGE() << endl;

}
void GameManager::ShowOptions() {
	cout << "1. Ability 1\n";
	cout << "2. Ability 2\n";
	cout << "3. Finisher\n";
}


void GameManager::run() {
	bool IsRoundFinished = false;
	bool IsAttackAvailable = false;
	int choice = 0;
	while (this->CurrentRound <= this->TotalRounds || this->Winner != false) {

		ToNextRound();
		
		while (IsRoundFinished) {
			cout << "It's" << players[CurrentPlayerIndex]->GetName() << "'s turn!!!!\n";
			ShowOptions();
			cin >> choice;
			switch (choice) {

			case 1:
				break;
			case 2:
				break;
			case 3:
				break;

			}



		}

	}





}
