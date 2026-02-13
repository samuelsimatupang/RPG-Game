#pragma once
#ifndef PLAYER_H
#define PLAYER_H		



#include <string>

class Player {
public:
	std::string name{};
	std::string role{};
	int level{};
	int healthPoint{};
	int manaPoint{};
};

void showInfoPlayer(const Player& player);

#endif