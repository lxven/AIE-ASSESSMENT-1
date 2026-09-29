#include <iostream>
#include "String.h"
using namespace std;

// Test function characterAt()
void testCharacterAt()
{
	String message("Hello, World!");
	if (message.characterAt(1) == 'e')
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

// Test function toUpper()
void testToUpper()
{
	String message("Hello, World!");
	message.toUpper();
	if (message.equalTo("HELLO, WORLD!"))
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

// Test function toLower()
void testToLower()
{
	String message("Hello, World!");
	message.toLower();
	if (message.equalTo("hello, world!"))
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

// Test function append()
void testAppend()
{
	String message("Hello, ");
	String word("World!");
	message.append(word);
	if (message.equalTo("Hello, World!"))
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

// Test function prepend()
void testPrepend()
{
	String message("World!");
	String word("Hello, ");
	message.prepend(word);
	if (message.equalTo("Hello, World!"))
	{
		cout << "Prepend(): PASS" << endl;
	}
	else
	{
		cout << "Prepend(): FAIL" << endl;
	}
}

// Test function eqaulTo()
void testEqualTo()
{
	String message1("Hello, World!");
	String message2("Hello, World!");
	if (message1.equalTo(message2))
	{
		cout << "EqualTo(): PASS" << endl;
	}
	else
	{
		cout << "EqualTo(): FAIL" << endl;
	}
}

// Test function find()
void testFind()
{
	String message("Hello World");
	String word("World");
	if (message.find(word) == 6)
	{
		cout << "Find(): PASS" << endl;
	}
	else
	{
		cout << "Find(): FAIL" << endl;
	}
}

// Test function start index find()
void testStartIndexFind()
{
	String message("Hello World");
	String word("World");
	if (message.find(7, word) == 12)
	{
		cout << "Start Index Find(): PASS" << endl;
	}
	else
	{
		cout << "Start Index Find(): FAIL" << endl;
	}
}





int main()
{
	// "Hello World"
	String message("Hello, World!");
	message.writeToConsole();

	// characterAt()
	cout << "Length: " << message.length() << endl;
	cout << "Character: " << message.characterAt(1) << endl;

	// toUpper() 
	message.toUpper();
	message.writeToConsole();

	// toLower()
	message.toLower();
	message.writeToConsole();

	// append()
	String first("Hello, ");
	String second("World!");
	first.append(second);
	first.writeToConsole();

	// prepend()
	String word("World!");
	String beginning("Hello, ");
	word.prepend(beginning);
	word.writeToConsole();

	// equalTo()
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

	// find() - searches from beginning
	String sentence("I Wanna Be a Billionare....So Freakkkingg Baddd!!!");
	String searchWord("Freakkkingg");

	sentence.writeToConsole();

	cout << "What is the Search Word: " << endl;
	searchWord.writeToConsole();

	int location = sentence.find(searchWord);
	cout << "Found at Index: " << location << endl;
	
	// find() - choose where searching starts
	String words("Make it Rain Rain Like a Money Tree!!!!");
	String findRain("Rain");
	words.writeToConsole();

	int location2 = words.find(10, findRain);
	cout << "What is the Second Rain Search Word Index: " << location2 << endl;

	// readFromConsole() & writeToConsole()
	String playerName;
	String answer;

	cout << "Enter Your Player Name: " << endl;
	playerName.readFromConsole();

	cout << "Is Your Player Name : ";
	playerName.writeToConsole();
	
	cout << "Enter Yes or No: ";
	answer.readFromConsole();

	while ((answer == String("No")) || (answer == String("no")) || (answer == String("NO")))
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

	// [] operator
	String gameName("AlienTD");
	cout << "Game Name: ";
	gameName.writeToConsole();
	cout << "Character at index 0: " << gameName[0] << endl;
	cout << "Character at index 5: " << gameName[5] << endl;

	// = operator
	String favoriteGame("Destiny 2");
	String copiedGame;
	cout << "Favorite Game: ";
	favoriteGame.writeToConsole();
	copiedGame = favoriteGame;
	cout << "Copied Game: ";
	copiedGame.writeToConsole();

	// < operator
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
		cout << "World of Warcraft Comes First Alphabetically!" << endl;
	}
	// + operator
	String firstName("Anisa & ");
	String secondName("Kamrin <3");
	String fullName = firstName + secondName;
	fullName.writeToConsole();

	// += operator
	String message2("Making Games = ");
	String game3("Making Money For Fun!!");
	message2 += game3;
	message2.writeToConsole();

	// replace()
	String replaceSentence("Jolteon is My Favorite Pokemon!!!");
	String oldWord("Jolteon");
	String newWord("Gengar");

	cout << "My Favorite Pokemon: ";
	replaceSentence.writeToConsole();
	
	cout << "Sike...He is So Trash" << endl;
	
	replaceSentence.replace(oldWord, newWord);
	cout << "Honestly..." << endl;
	replaceSentence.writeToConsole();

	////////////////// ALL TEST ///////////////

	// Test characterAt()
	testCharacterAt();

	// Test toUpper()
	testToUpper();

	// Test toLower()
	testToLower();

	// Test append()
	testAppend();

	// Test prepend()
	testPrepend();

	// Test equalTo()
	testEqualTo();

	// Test find()
	testFind();

	// Test startIndexFind()
	testStartIndexFind();



	return 0;
}