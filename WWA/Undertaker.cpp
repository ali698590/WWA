#include "Undertaker.h"

bool Undertaker::GetIsShieldReady() { return IsShieldReady; }

void Undertaker::ChangeShieldStatus(bool Activation) {
	IsShieldReady = Activation;
}


void Undertaker::ChangeHealth(int h) {
	if (this->GetIsShieldReady()) {
		ChangeShieldStatus(false);

	}
	else {
		Player::ChangeHealth(h);

	}

}


Undertaker::Undertaker():Player("Undertaker",650,10),IsShieldReady(false) {
	Moves_Energy_Cost[0] = 2;
	Moves_Energy_Cost[1] = 4;
	Moves_Energy_Cost[2] = 8;
}

void Undertaker::ability1(Player* targets[2]) {
	int LifeSteal = 35;
	int EnergyCost = 2;
	int Index = rand() % 2;

	targets[Index]->ChangeHealth(-LifeSteal);
	targets[Index]->ChangeRAGE(rand() % 26 + 25);

	this->ChangeHealth(LifeSteal);
	this->ChangeEnergy(-Moves_Energy_Cost[0]);

}

void Undertaker::ability2(Player* targets[2]) {

	int EnergyCost = 4;
	this->ChangeEnergy(-EnergyCost);
	this->ChangeShieldStatus(true);

}

void Undertaker::Finisher(Player* targets[2]) {    

	Player* ToAttack = nullptr;

	if (targets[0]->GetHealth() <= targets[1]->GetHealth()) {
		ToAttack = targets[0];
	}
	else {
		ToAttack = targets[1];
	}
	int AttackDamage = 350;
	int EnergyCost = 8;
	ToAttack->ChangeHealth(-AttackDamage);
	ToAttack->ChangeRAGE(rand() % 26 + 25);
	this->ResetRAGE();
	this->ChangeEnergy(-EnergyCost);


}