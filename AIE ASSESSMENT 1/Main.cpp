#include <iostream>
#include "String.h"
using namespace std;


int main()
{
	// Test "Hello World"
	String message("Hello, World!");
	message.writeToConsole();

	// Test characterAt()
	cout << "Length: " << message.length() << endl;
	cout << "Character: " << message.characterAt(1) << endl;

	// Test toUpper() 
	message.toUpper();
	message.writeToConsole();

	// Test toLower()
	message.toLower();
	message.writeToConsole();

	// Test append()
	String first("Hello, ");
	String second("World!");
	first.append(second);
	first.writeToConsole();

	// Test prepend
	String word("World!");
	String beginning("Hello, ");
	word.prepend(beginning);
	word.writeToConsole();

	// Test equalTo
	String name1("Anisa");
	String name2("Anisa");

	if (name1.equalTo(name2))
	{
		cout << "The strings are equal!" << endl;
	}
	else
	{
		cout << "the strings are not equal!" << endl;
	}

	// Test find() - searches from beginning
	String sentence("I Wanna Be a Billionare....So Freakkkingg Baddd!!!");
	String searchWord("Freakkkingg");

	sentence.writeToConsole();

	cout << "What is the Search Word: " << endl;
	searchWord.writeToConsole();

	int location = sentence.find(searchWord);
	cout << "Found at Index: " << location << endl;
	
	// Test find() - choose where searching starts
	String words("Make it Rain Rain Like a Money Tree!!!!");
	String findRain("Rain");
	words.writeToConsole();

	int location2 = words.find(10, findRain);
	cout << "What is the Second Rain Search Word Index: " << location2 << endl;

	// Test readFromConsole() & writeToConsole()
	String playerName;
	String answer;

	cout << "Enter Your Player Name: " << endl;
	playerName.readFromConsole();

	cout << "Is Your Player Name : ";
	playerName.writeToConsole();
	
	cout << "Enter Yes or No: ";
	answer.readFromConsole();

	while (answer == String("No"))
	{
		cout << "Re-Enter Your Player Name: ";
		playerName.readFromConsole();

		cout << "Is Your Player Name : ";
		playerName.writeToConsole();

		cout << "Enter Yes or No: ";
		answer.readFromConsole();
	}
	cout << "Player Name: ";
	playerName.writeToConsole();

	// Test [] operator
	String gameName("AlienTD");
	cout << "Game Name: ";
	gameName.writeToConsole();
	cout << "Character at index 0: " << gameName[0] << endl;
	cout << "Character at index 5: " << gameName[5] << endl;

	// Test = operator
	String favoriteGame("Destiny 2");
	String copiedGame;
	cout << "Favorite Game: ";
	favoriteGame.writeToConsole();
	copiedGame = favoriteGame;
	cout << "Copied Game: ";
	copiedGame.writeToConsole();

	// Test < operator
	String game1("Diablo 4");
	String game2("World of Warcraft");
	cout << "Which Game Comes First Alphabetically?  " << endl;
	cout << "Game 1: ";
	game1.writeToConsole();
	cout << "Or..." << endl;
	cout << "Game 2: ";
	game2.writeToConsole();

	if (game1 < game2)
	{
		cout << "Diablo 4 Comes First Alphabetically!" << endl;
	}
	else
	{
		cout << "World of Warcraft Comes First Alpabetically!" << endl;
	}
	return 0;
}