#include "TheRock.h"

TheRock::TheRock():Player("THE ROCK",450,10){
	Moves_Energy_Cost[0] = 4;
	Moves_Energy_Cost[1] = 4;
	Moves_Energy_Cost[2] = 5;
}

void TheRock::SetWhoToBetray(Player* p) {
	this->WhoToBetray;
}



void TheRock::ability1(Player* targets[2]){    

				int EnergyCost = 4;
				LastAttacker->ChangeHealth(35);
				LastAttacker->ChangeRAGE(rand() % 26 + 25);
				this->SetWhoToBetray(LastAttacker);
				this->ChangeEnergy(-Moves_Energy_Cost[0]);
		
}

void TheRock::ability2(Player* targets[2]){
		int EnergyCost = 4;

		this->ChangeHealth(60);
		
		this->ChangeRAGE(25);
		
		this->ChangeEnergy(-Moves_Energy_Cost[1]);

	

}

void TheRock::Finisher(Player* targets[2]){

	int EnergyCost = 6;
	int AttackDamage = 250;
	Player* ToAttack = this->GetWhoToBetray();
	ToAttack->ChangeHealth(-AttackDamage);
	ToAttack->ChangeRAGE(rand() % 26 + 25);
	this->ResetRAGE();
	this->ChangeEnergy(-Moves_Energy_Cost[2]);

}

Player* TheRock::GetLastAttacker() { return LastAttacker; }
Player* TheRock::GetLastLastAttacker() { return LastLastAttacker; }
Player* TheRock::GetWhoToBetray() { return WhoToBetray; }