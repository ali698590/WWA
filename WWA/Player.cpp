#include "Player.h"


int Player::GetEnergy() const { return Energy; }

int Player::GetRAGE() const { return RAGE; }

int Player::GetHealth() const { return Health; }

void Player::ChangeHealth(int h) {
	Health += h;
}
void Player::ChangeRAGE(int r) {
	RAGE += r;
}
void Player::ChangeEnergy(int e) {
	Energy += e;
}
void Player::ResetRAGE() {
	RAGE = 0;
}
bool Player::Is_Alive() {
	return IsAlive;
}
void Player::SetDead(){
	IsAlive = false;
}
void Player::BackToLife() {
	IsAlive = true;
}
Player::Player(string name, int health, int energy, int rage, bool IsAlive = true)
	:Name(name),Health(health),Energy(energy),RAGE(rage),IsAlive(IsAlive) {}

string Player::GetName() {
	return Name;
}
