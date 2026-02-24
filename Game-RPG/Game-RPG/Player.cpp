#include "player.h"
#include <iostream>
//#define ENABLE_DEBUG



void showInfoPlayer(const Player& player) {
#ifdef ENABLE_DEBUG
	std::cout << "showInfoPlayer get called" << std::endl;

#endif // 


	std::cout << "Name: " << player.name << std::endl;
	std::cout << "Role: " << player.role << std::endl;
	std::cout << "Level: " << player.level << std::endl;
	std::cout << "Health: " << player.healthPoint<< std::endl;
	std::cout << "Mana: " << player.manaPoint << std::endl;	
}

int getHeal(const Player& player, int healthPoint, int totalHeal) {
	int healAmount = healthPoint + totalHeal;
	return healAmount;
}