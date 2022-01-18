#include <iostream>
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	Player NewPlayer; //instance วัดู

	NewPlayer.Gold = 10;
	NewPlayer.HP = 100;
	NewPlayer.Collect();
	NewPlayer.Move();
	NewPlayer.Run();

	
	return 0;
}