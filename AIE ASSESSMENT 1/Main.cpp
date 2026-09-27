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

	return 0;
}