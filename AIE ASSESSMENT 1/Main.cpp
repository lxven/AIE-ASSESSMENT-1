#include <iostream>
#include "String.h"
using namespace std;


int main()
{
	// Test "Hello World"
	String message("Hello, World!");
	message.writeToConsole();

	// Test characterAt
	cout << "Length: " << message.length() << endl;
	cout << "Character: " << message.characterAt(1) << endl;



	return 0;
}