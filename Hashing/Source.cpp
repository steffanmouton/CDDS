#include <functional>
#include <iostream>
#include "Hashing.h"


namespace HashFunction
{
	
	
}
struct Player
{
	////MrMatt gave me this to generate names randomly and print
	//std::string name;
	//int health;
	//friend std::ostream& operator<<(std::ostream& os, const Player& dt)
	//{
	//	os << "Player Health: " << dt.health;
	//	return os;
	//}
	
};

#include <string>
int main()
{
	////MrMatt code:
	//HashTable<const char*, Player> players(100);
	//for (int i = 0; i < 25; i++)
	//{
	//	auto p = Player();		
	//	p.name = std::to_string(i).c_str();
	//	players.add(p.name.c_str(), p);
	//}


	HashTable<const char*, int> test(100);
	
	test.add("Steffan", 10);
 


	std::cout << test["Steffan"];
}