#include <iostream>
#include <random>
#include <chrono>

int randomTime(int num) {
	srand(time(NULL));
	int randomNum = (rand() % 10) + 1;

	std::cout << "Random Number: " << randomNum << std::endl;
	return num;

}