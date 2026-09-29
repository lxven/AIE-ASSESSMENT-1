#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <iomanip>
#include "String.h"
using namespace std;

// Test function length()
bool testLength()
{
	String message("Hello");
	if (message.length() == 5)
	{
		cout << "Test Length(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Length(): FAIL" << endl;
		return false;
	}
}
// Test function characterAt()
bool testCharacterAt()
{
	String message("Hello, World!");
	if (message.characterAt(1) == 'e')
	{
		cout << "Test CharacterAt(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test CharacterAt(): FAIL" << endl;
		return false;
	}
}

// Test function toUpper()
bool testToUpper()
{
	String message("Hello, World!");
	message.toUpper();
	if (message.equalTo("HELLO, WORLD!"))
	{
		cout << "Test ToUpper(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test ToUpper(): FAIL" << endl;
		return false;
	}
}

// Test function toLower()
bool testToLower()
{
	String message("Hello, World!");
	message.toLower();
	if (message.equalTo("hello, world!"))
	{
		cout << "Test ToLower(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test ToLower(): FAIL" << endl;
		return false;
	}
}

// Test function append()
bool testAppend()
{
	String message("Hello, ");
	String word("World!");
	message.append(word);
	if (message.equalTo("Hello, World!"))
	{
		cout << "Test Append(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Append(): FAIL" << endl;
		return false;
	}
}

// Test function prepend()
bool testPrepend()
{
	String message("World!");
	String word("Hello, ");
	message.prepend(word);
	if (message.equalTo("Hello, World!"))
	{
		cout << "Test Prepend(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Prepend(): FAIL" << endl;
		return false;
	}
}

// Test cStr()
bool testCStr()
{
	String message("Hello, World!");
	if (strcmp(message.cStr(), "Hello, World!") == 0)
	{
		cout << "Test cStr(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test cStr(): FAIL" << endl;
		return false;
	}
}
// Test function eqaulTo()
bool testEqualTo()
{
	String message1("Hello, World!");
	String message2("Hello, World!");
	if (message1.equalTo(message2))
	{
		cout << "Test EqualTo(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test EqualTo(): FAIL" << endl;
		return false;
	}
}

// Test function find()
bool testFind()
{
	String message("Hello World");
	String word("World");
	if (message.find(word) == 6)
	{
		cout << "Test Find(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Find(): FAIL" << endl;
		return false;
	}
}

// Test function start index find()
bool testStartIndexFind()
{
	String words("Make it Rain Rain Like a Money Tree!!!!");
	String findRain("Rain");
	if (words.find(10, findRain) == 13)
	{
		cout << "Test Start Index Find(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Start Index Find(): FAIL" << endl;
		return false;
	}
}

// Test function readFromConsole()
bool testReadFromConsole()
{
	String message;
	cout << "Type Hello: ";
	message.readFromConsole();
	if (message.equalTo("Hello"))
	{
		cout << "Test ReadFromConsole(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test ReadFromConsole(): FAIL" << endl;
		return false;
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
bool testBracketOperator()
{
	String gameName("AlienTD");
	if (gameName[0] == 'A')
	{
		cout << "Test [] Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test [] Operator: FAIL" << endl;
		return false;
	}
}

// Test == operator
bool testEqualOperator()
{
	String player1("Lxven");
	String player2("Lxven");
	if (player1 == player2)
	{
		cout << "Test == Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test == Operator: FAIL" << endl;
		return false;
	}
}


// Test function = operator()
bool testAssigmentOperator()
{
	String favoriteGame("Destiny 2");
	String copiedGame;
	copiedGame = favoriteGame;
	if (copiedGame.equalTo("Destiny 2"))
	{
		cout << "Test = Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test = Operator: FAIL" << endl;
		return false;
	}
}

// Test < operator()
bool testLessThanOperator()
{
	String game1("Diablo 4");
	String game2("World of Warcraft");
	if (game1 < game2)
	{
		cout << "Test < Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test < Operator: FAIL" << endl;
		return false;
	}
}

// Test + operator()
bool testPlusOperator()
{
	String firstName("Anisa & ");
	String secondName("Kamrin <3");
	String fullName = firstName + secondName;
	if (fullName.equalTo("Anisa & Kamrin <3"))
	{
		cout << "Test + Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test + Operator: FAIL" << endl;
		return false;
	}
}

// Test += operator
bool testPlusEqualOperator()
{
	String message("Making Games = ");
	String game("Making Money For Fun!!");
	message += game;
	if (message.equalTo("Making Games = Making Money For Fun!!"))
	{
		cout << "Test += Operator: PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test += Operator: FAIL" << endl;
		return false;
	}
}

// Test replace()
bool testReplace()
{
	String sentence("Jolteon is My Favorite Pokemon!!!");
	String oldWord("Jolteon");
	String newWord("Gengar");
	sentence.replace(oldWord, newWord);
	if (sentence.equalTo("Gengar is My Favorite Pokemon!!!"))
	{
		cout << "Test Replace(): PASS" << endl;
		return true;
	}
	else
	{
		cout << "Test Replace(): FAIL" << endl;
		return false;
	}
}

// Test Result into .txt file
void logTestResult(ofstream& logfile, int testNumber, string testName, bool passed)
{
	logfile << "Test " << testNumber << "\t";
	logfile << testName << "\t";
	if (passed)
	{
		logfile << "Successful" << endl;
	}
	else
	{
		logfile << "Failed" << endl;
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

	// Open text log file
	ofstream logFile("test_log.txt", ios::app);

	// Count tests
	int passedTests = 0;
	int totalTests = 18;

	// Test length()
	bool lengthResult = testLength();
	if (testLength())
	{
		passedTests++;
	}

	// Test characterAt()
	bool characterAtResult = testCharacterAt();
	if (testCharacterAt())
	{
		passedTests++;
	}

	// Test toUpper()
	bool toUpperResult = testToUpper();
	if (testToUpper())
	{
		passedTests++;
	}

	// Test toLower()
	bool toLowerResult = testToLower();
	if (testToLower())
	{
		passedTests++;
	}

	// Test append()
	bool appendResult = testAppend();
	if (testAppend())
	{
		passedTests++;
	}

	// Test prepend()
	bool prependResult = testPrepend();
	if (testPrepend())
	{
		passedTests++;
	}

	// Test cStr()
	bool cStrResult = testCStr();
	if (testCStr())
	{
		passedTests++;
	}

	// Test equalTo()
	bool equalToResult = testEqualTo();
	if (testEqualTo())
	{
		passedTests++;
	}

	// Test find()
	bool findResult = testFind();
	if (testFind())
	{
		passedTests++;
	}

	// Test startIndexFind()
	bool startIndexFindResult = testStartIndexFind();
	if (testStartIndexFind())
	{
		passedTests++;
	}

	// Test readFromConsole()
	bool readFromConsoleResult = testReadFromConsole();
	if (testReadFromConsole())
	{
		passedTests++;
	}

	// Test writeToConsole()
	testWriteToConsole();


	// Test [] operator
	bool testBracketOperatorResult = testBracketOperator();
	if (testBracketOperator())
	{
		passedTests++;
	}

	// Test == operator
	bool testEqualOperatorResult = testEqualOperator();
	if (testEqualOperator())
	{
		passedTests++;
	}

	// Test = operator
	bool testAssignmentResult = testAssigmentOperator();
	if (testAssigmentOperator())
	{
		passedTests++;
	}

	// Test < operator
	bool testLessThanResult = testLessThanOperator();
	if (testLessThanOperator())
	{
		passedTests++;
	}

	// Test + operator
	bool testPlusResult = testPlusOperator();
	if (testPlusOperator())
	{
		passedTests++;
	}

	// Test += operator
	bool testPlusEqualResult = testPlusEqualOperator();
	if (testPlusEqualOperator())
	{
		passedTests++;
	}

	// Test replace()
	bool testReplaceResult = testReplace();
	if (testReplace())
	{
		passedTests++;
	}
	return 0;
}
