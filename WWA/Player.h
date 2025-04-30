#pragma once
#include <string>

using namespace std;

class Player
{
protected:

	string Name;
	int Health;
	int Energy;
	int RAGE;
	bool IsAlive;


public:


	virtual void ability1(Player* targets[2]) = 0;

	virtual void ability2(Player* targets[2]) = 0;

	virtual void Finisher(Player* targets[2]) = 0;

	int GetEnergy() const;
	
	int GetRAGE() const;

	int GetHealth() const;

	virtual void ChangeHealth(int h);
	
	void ChangeRAGE(int r);
	
	void ChangeEnergy(int e);

	void ResetRAGE();

	void SetDead();

	void BackToLife();

	bool Is_Alive();

	string GetName();

	Player(string name, int health, int energy,int rage = 0,bool IsAlive = true);
	

	//int GetMin() {
	//	if (AbilityBar1 <= AbilityBar2 && AbilityBar1 <= FinisherBar) {
	//		return AbilityBar1;
	//	}
	//	else if (AbilityBar2 <= FinisherBar) {
	//		return AbilityBar2;
	//	}
	//	else {
	//		return FinisherBar;
	//	}
	//}
};

