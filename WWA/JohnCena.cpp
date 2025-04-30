#include "JohnCena.h"
#include <Ctime>
#include <cstdlib>


JohnCena::JohnCena():Player("John Cena",500,10) {
	LastAttacker = nullptr;
	Moves_Energy_Cost[0] = 3;
	Moves_Energy_Cost[1] = 4;
	Moves_Energy_Cost[2] = 6;


}

void JohnCena::ability1(Player* targets[2]) {

	int index = rand() % 2;
	int AttackDamage = rand() % 31 + 30;
	
		targets[index]->ChangeHealth(AttackDamage);

		targets[index]->ChangeRAGE(rand()%26 + 25);

		this->ChangeEnergy(-Moves_Energy_Cost[0]);

}

void JohnCena::ability2(Player* targets[2]) {
	

		int AttackDamage = rand() % 121 + 40;
	
		LastAttacker->ChangeHealth(AttackDamage);

		LastAttacker->ChangeRAGE(rand() % 26 + 25);

		this->ChangeEnergy(-Moves_Energy_Cost[1]);

}

void JohnCena::Finisher(Player* targets[2]) {
	    int AttackDamage = 300;

		Player* ToAttack = nullptr;

		if (targets[0]->GetHealth() >= targets[1]->GetHealth() && targets[0]->GetHealth() > 0) {
			ToAttack = targets[0];
		}
		else {
			ToAttack = targets[1];
		}

		ToAttack->ChangeHealth(AttackDamage);

		ToAttack->ChangeRAGE(rand() % 26 + 25); 
		this->ResetRAGE();
		this->ChangeEnergy(-Moves_Energy_Cost[2]);

	}

