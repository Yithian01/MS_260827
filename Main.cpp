#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

int main()
{
	APlayer* Player = new APlayer();
	ASlime* Slimes[3] = { nullptr };
	AGoblin* Goblins[3] = { nullptr };
	ABoar* Boar = new ABoar();

	for (int i = 0; i < 3; i++)
	{
		Slimes[i] = new ASlime();
	}

	for (int i = 0; i < 3; i++)
	{
		Goblins[i] = new AGoblin();
	}


	//=== Move ====
	Player->Move();

	for (int i = 0; i < 3; i++)
	{
		Slimes[i]->Move();
	}

	for (int i = 0; i < 3; i++)
	{
		Goblins[i]->Move();
	}

	Boar->Move();

	//=== Delete ====
	delete Player;

	for (int i = 0; i < 3; i++)
	{
		delete Slimes[i];
		Slimes[i] = nullptr;
	}

	for (int i = 0; i < 3; i++)
	{
		delete Goblins[i];
		Goblins[i] = nullptr;
	}

	delete Boar;
	Boar = nullptr;


	return 0;
}