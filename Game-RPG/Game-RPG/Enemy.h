#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
public:
	std::string name{};
	int enemyLevel{};
	int enemyHP{};//enemy health point
	int enemyMP{};//enemy mana point
	int enemyAttackDamage{}; // damage point that enemy gives to player
	int enemyXP{}; // experience point that player gets when enemy get killed
};
//int enemyAttack();
void showEnemyInfo(const Enemy& enemy);
#endif
