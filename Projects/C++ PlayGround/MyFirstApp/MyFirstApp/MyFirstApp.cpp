// MyFirstApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

struct Vector
{
	int x, y, z;
};


struct Player
{
	std::string name;
	int health;
	Vector positon;
};


int main()
{
	std::cout << "Hello this is pretty cool!" << std::endl;
	std::cout << "I am now a C++ Programmer Woot!" << std::endl;

	Player me;
	me.name = "Zaymon";
	me.health = 400;
	me.positon.x = 1;
	me.positon.y = 1;
	me.positon.z = 1;

	std::cout << "Player Name: " << me.name << std::endl << "Player Health:" << me.health << std::endl;

    return 0;
}

