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


	return 0;
}