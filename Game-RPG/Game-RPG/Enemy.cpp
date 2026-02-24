#include <iostream>

//
#include "Enemy.h"
#define ENABLE_DEBUG

void showEnemyInfo(const Enemy& enemy) {
#ifdef DEBUG
	std::cout << "show EnemyInfo get called" << std::endl;
#endif // DEBUG

	std::cout << "Name: " << enemy.name << std::endl;
	std::cout << "Level: " << enemy.enemyLevel << std::endl;
	std::cout << "Health: " << enemy.enemyHP << std::endl;
	std::cout << "Mana: " << enemy.enemyMP << std::endl;
	std::cout << "Attack Damage: " << enemy.enemyAttackDamage << std::endl;
	std::cout << "Experience Point: " << enemy.enemyXP << std::endl;
}
