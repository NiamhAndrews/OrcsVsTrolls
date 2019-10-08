// NiamhAndrewsOrcsVsTrolls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//C00242944
//Niamh Andrews
//01/10/2019

#include <iostream>
#include <windows.h>
using namespace std;











//Phil's sample code
class Character { //abstract class - can be used differenty by each class that inherets it
public:

	void flip() { cout << "The flip function in character class\n" << endl; }
	virtual void walk() { cout << "Default walk function in Character class" << endl; }
	virtual void fly() = 0; //pure virtual function - has no defenition/functionality, but can be given this by vclasses that inheret it
};

class Orc : public Character {//-can use all functions from Character
public:
	void barrelRoll() { cout << "Do a barrel roll!" << endl; }
	void walk() { cout << "The walk function in the Orc class" << endl; }
	void fly() { cout << "...Why are orcs flying?" << endl; } //Both classes inheret the same "fly()" function and are called the same way, 
};																	//but both work differently depending on what they define its functionality as


class Troll : public Character {
public:
	void fly() { cout << "Trolls can fly too, apparently" << endl; }
};

int main(void)
{
	system("COLOR E5"); //Nice readable yellow console
	//system("COLOR 0A"); //Blacvk background, green text console


	cout << "Starting in main.\nCannot create/instantiate the character class because it is virtual.\n\n" << endl;
	//Character character;
	//character.flip();
	//character.walk();

	cout << "In Main, leaving to create an Orc" << endl;
	Orc orc;
	orc.walk();
	orc.fly();
	orc.flip();

	cout << "In Main, leaving to create ''an'' Troll" << endl;
	Troll troll;
	troll.walk();
	troll.fly();
	troll.flip();

	Character* npc = &orc;
	npc->flip();
	npc->fly();
	npc->walk();

	npc = &troll;
	npc->flip();
	npc->fly();
	npc->walk();

	cin.get();





	string hello = "Hello Bob. Let's get\nprogramming in C++";
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(100);
		x++;
	};
	cout << "\n\nEnd of message.." << endl << endl;


	system("PAUSE");


	return 0;
}

