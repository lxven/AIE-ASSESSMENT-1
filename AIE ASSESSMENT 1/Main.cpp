#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;
// Test function length()
void testLength()
{
	String message("Hello");
	if (message.length() == 5)
	{
		cout << "Test Length(): PASS" << endl;
	}
	else
	{
		cout << "Test Length(): FAIL" << endl;
	}
}
// Test function characterAt()
void testCharacterAt()
{
	String message("Hello, World!");
	if (message.characterAt(1) == 'e')
	{
		cout << "Test CharacterAt(): PASS" << endl;
	}
	else
	{
		cout << "Test CharacterAt(): FAIL" << endl;
	}
}

// Test function toUpper()
void testToUpper()
{
	String message("Hello, World!");
	message.toUpper();
	if (message.equalTo("HELLO, WORLD!"))
	{
		cout << "Test ToUpper(): PASS" << endl;
	}
	else
	{
		cout << "Test ToUpper(): FAIL" << endl;
	}
}

// Test function toLower()
void testToLower()
{
	String message("Hello, World!");
	message.toLower();
	if (message.equalTo("hello, world!"))
	{
		cout << "Test ToLower(): PASS" << endl;
	}
	else
	{
		cout << "Test ToLower(): FAIL" << endl;
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
		cout << "Test Append(): PASS" << endl;
	}
	else
	{
		cout << "Test Append(): FAIL" << endl;
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
		cout << "Test Prepend(): PASS" << endl;
	}
	else
	{
		cout << "Test Prepend(): FAIL" << endl;
	}
}

// Test cStr()
void testCStr()
{
	String message("Hello, World!");
	if (strcmp(message.cStr(), "Hello, World!") == 0)
	{
		cout << "Test cStr(): PASS" << endl;
	}
	else
	{
		cout << "Test cStr(): FAIL" << endl;
	}
}
// Test function eqaulTo()
void testEqualTo()
{
	String message1("Hello, World!");
	String message2("Hello, World!");
	if (message1.equalTo(message2))
	{
		cout << "Test EqualTo(): PASS" << endl;
	}
	else
	{
		cout << "Test EqualTo(): FAIL" << endl;
	}
}

// Test function find()
void testFind()
{
	String message("Hello World");
	String word("World");
	if (message.find(word) == 6)
	{
		cout << "Test Find(): PASS" << endl;
	}
	else
	{
		cout << "Test Find(): FAIL" << endl;
	}
}

// Test function start index find()
void testStartIndexFind()
{
	String words("Make it Rain Rain Like a Money Tree!!!!");
	String findRain("Rain");
	if (words.find(10, findRain) == 13)
	{
		cout << "Test Start Index Find(): PASS" << endl;
	}
	else
	{
		cout << "Test Start Index Find(): FAIL" << endl;
	}
}

// Test function readFromConsole()
void testReadFromConsole()
{
	String message;
	cout << "Type Hello: ";
	message.readFromConsole();
	if (message.equalTo("Hello"))
	{
		cout << "Test ReadFromConsole(): PASS" << endl;
	}
	else
	{
		cout << "Test ReadFromConsole(): FAIL" << endl;
	}
}

// Test function writeToConsole()
void testWriteToConsole()
{
	String message("Hello, World!");
	cout << "Test WriteToConsole(): ";
	message.writeToConsole();
}
// Test function [] operator()
void testBracketOperator()
{
	String gameName("AlienTD");
	if (gameName[0] == 'A')
	{
		cout << "Test [] Operator: PASS" << endl;
	}
	else
	{
		cout << "Test [] Operator: FAIL" << endl;
	}
}

// Test == operator
void testEqualOperator()
{
	String player1("Lxven");
	String player2("Lxven");
	if (player1 == player2)
	{
		cout << "Test == Operator: PASS" << endl;
	}
	else
	{
		cout << "Test == Operator: FAIL" << endl;
	}
}


// Test function = operator()
void testAssigmentOperator()
{
	String favoriteGame("Destiny 2");
	String copiedGame;
	copiedGame = favoriteGame;
	if (copiedGame.equalTo("Destiny 2"))
	{
		cout << "Test = Operator: PASS" << endl;
	}
	else
	{
		cout << "Test = Operator: FAIL" << endl;
	}
}

// Test < operator()
void testLessThanOperator()
{
	String game1("Diablo 4");
	String game2("World of Warcraft");
	if (game1 < game2)
	{
		cout << "Test < Operator: PASS" << endl;
	}
	else
	{
		cout << "Test < Operator: FAIL" << endl;
	}
}

// Test + operator()
void testPlusOperator()
{
	String firstName("Anisa & ");
	String secondName("Kamrin <3");
	String fullName = firstName + secondName;
	if (fullName.equalTo("Anisa & Kamrin <3"))
	{
		cout << "Test + Operator: PASS" << endl;
	}
	else
	{
		cout << "Test + Operator: FAIL" << endl;
	}
}

// Test += operator
void testPlusEqualOperator()
{
	String message("Making Games = ");
	String game("Making Money For Fun!!");
	message += game;
	if (message.equalTo("Making Games = Making Money For Fun!!"))
	{
		cout << "Test += Operator: PASS" << endl;
	}
	else
	{
		cout << "Test += Operator: FAIL" << endl;
	}
}

// Test replace()
void testReplace()
{
	String sentence("Jolteon is My Favorite Pokemon!!!");
	String oldWord("Jolteon");
	String newWord("Gengar");
	sentence.replace(oldWord, newWord);
	if (sentence.equalTo("Gengar is My Favorite Pokemon!!!"))
	{
		cout << "Test Replace(): PASS" << endl;
	}
	else
	{
		cout << "Test Replace(): FAIL" << endl;
	}
}




int main()
{
	// "Hello World"
	String message("Hello, World!");
	message.writeToConsole();

	// length()
	String lengthMessage("Hello, World!");
	cout << "Length: " << lengthMessage.length() << endl;

	// characterAt()
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

	// cStr() 
	String cStrMessage("Hello, World!");
	cout << "cStr:" << cStrMessage.cStr() << endl;

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

	// == operator
	String player1("Lxven");
	String player2("Lxven");
	if (player1 == player2)
	{
		cout << "The Players name Are Equal!" << endl;
	}
	else
	{
		cout << "The Pleyers Name Are Not Equal!" << endl;
	}

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

	////////////////// ALL TEST ///////////////////

	// Test length()
	testLength();

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

	// Test cStr()
	testCStr();

	// Test equalTo()
	testEqualTo();

	// Test find()
	testFind();

	// Test startIndexFind()
	testStartIndexFind();

	// Test readFromConsole()
	testReadFromConsole();

	// Test writeToConsole()
	testWriteToConsole();

	// Test [] operator
	testBracketOperator();

	// Test == operator
	testEqualOperator();

	// Test = operator
	testAssigmentOperator();

	// Test < operator
	testLessThanOperator();

	// Test + operator
	testPlusOperator();

	// Test += operator
	testPlusEqualOperator();

	// Test replace()
	testReplace();

	return 0;
}
