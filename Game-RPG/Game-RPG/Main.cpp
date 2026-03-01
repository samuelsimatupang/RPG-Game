#include "player.h"
#include "Enemy.h"
#include "main.h"
#include "Randomize.h"

int randomTime(int num);



int chooseAction(int choiceNumber) {
	choiceNumber;

	std::cout << "1. Show Information Player" << std::endl;
	std::cout << "2. Heal Player" << std::endl;
	std::cout << "3. Show Informatin Enemy" << std::endl;


	std::cout << "Choose an Action: " << std::endl;
	std::cin >> choiceNumber;

	return choiceNumber;
}



int main() {
	Player player1{ "Arthas", "Warrior", 10, 150, 50 };
	Enemy enemy1{ "Goblin", 1, 25, 10, 5, 25 };

	int random = randomTime(0);

	if (random == 1) {
		std::cout << "Enemy Appears!" << std::endl;
	}
	else {
		std::cout << "Enemy does not appear!" << std::endl;
	}

	int choice = chooseAction(0);
	if (choice == 1) {
		showInfoPlayer(player1);
		std::cout << std::endl;
		return chooseAction(0);
	}
	else if (choice == 2) {
		getHeal(player1, 50, 100);
		std::cout << std::endl;
		return chooseAction(0);
	}
	else if (choice == 3) {
		showEnemyInfo(enemy1);
		std::cout << std::endl;
		return chooseAction(0);
	}
}

	
