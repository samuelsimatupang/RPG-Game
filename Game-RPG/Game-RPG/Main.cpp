#include "player.h"
#include "main.h"



int main() {
	//menampilkan informasi pemain
	
	Player player1{ "Arthas", "Warrior", 10, 150, 50 };
	showInfoPlayer(player1);

	return 0;
}