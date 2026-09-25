#include "String.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

// CONSTRUCTORS //

// Default constructor
String::String()
{
	data = new char[1];
	data[0] = '\0';
}

// Constructor
String::String(const char* str)
{
	int length = strlen(str);
	data = new char[length + 1];
	strcpy_s(data, length + 1, str);
}

// Creates seperate copy of another string
String::String(const String& other)
{
	int length = other.length();
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
}






// DESTRUCTOR //

// Releases the memory used by data
String::String()
{
	delete[] data;
}

// LENGTH //

// Return nuber of characters in the string
int String::length() const
{
	return strlen(data);
}




// CHARCTER AT //

// Returns character at the given index
char String::characterAt(int index) const
{
	// Make sure the index is valid 
	if (index < 0 || index >= index >= length())
	{
		return '\0';
	}
	return data[index];
}



// EQUAL TO //

// Checks if two strings are equal
bool String::equalTo(const String& str) const
{
	return strcmp(data, str.data) == 0;
}



// APPEND //

// Adds string to end of string
void String::append(const String& str)
{
	int newLength = length() + str.length();

	// Create memory for both strings
	char* newData = new char[newLength + 1];

	// Copy this string first
	strcpy_s(newData, newLength + 1, data);

	// Add the other string to the end
	strcat_s(newData, newLength + 1, str.data);

	// Delete the old memory 
	delete[] data;

	// Point data to the new memory 
	data = newData;
}



// TO LOWER //

//Converts every character to lowercase
void String::toLower()
{
	for (int i = 0; i < length(); i++)
	{
		data[i] = static_cast<char>(tolower(data[i]));
	}
}



// TO UPPER //

// Converts every character to uppercase
void String::toUpper()
{
	for (int i = 0; i < length(); i++)
	{
		data[i] = static_cast<char>(toupper(data[i]));
	}
}



// FIND //

// Finds the first occurrence of findString
int String::find(const String& findString) const
{
	// strstr searches for one C-Style string inside another
	const char* result = strstr(data, findString.data);

	// If nothing was found
	if (result == nullptr)
	{
		return -1;
	}

	// Find how far result is from beginning
	return static_cast<int>(result - data);
}



// FIND WITH START INDEX // 

// Finds string from index
int String::find(int startIndex, const String& findString) const
{
	// Check for  invalid starting position
	if (startIndex < 0 || startIndex >= length())
	{
		return -1;
	}

	// Searching from startIndex
	const char* result = strstr(data + startIndex, findString.data);

	if (result == nullptr)
	{
		return -1;
	}
	
	return static_cast<int>(result - data);
}


// REPLACE //

// Replaces occurrence findString with replaceString
void String::replace(const String& findString, const String& replaceString)

{
	// prevent searching for empty string
	if (findString.length() == 0)
	{
		return;
	}
	string temp = data;
	string findText = findString.cStr();
	string replaceText = replaceString.cStr();
	size_t position = 0;

	// Keep searching until no more matches
	while ((position = temp.find(findText, position)) != string::npos)
	{
		temp.replace(position, findText.length(), replaceText);

		// Move past text that was inserted
		position += replaceText.length();
	}


	// Delete old charcter array
	delete[] data;

	// Create momery for replace string
	data = new char[temp.length() + 1];

	// Copy result into character array
	strcpy_s(data, temp.length() + 1, temp.c_str());
}


// READ FROM CONSOLE //

// Reads text from console
void String::readFromConsole()
{
	string input;
	getline(cin, input);

	// Delete past string
	delete[] data;

	// Create memory for new input
	data = new char[input.length() + 1];

	// Copy into character array
	strcpy_s(data, input.length() + 1, input.c_str());
}



// WRITE TO CONSOLE //

// Prints string to console
void String::writeToConsole() const
{
	cout << data << endl;
}



// OPERATOR == // 

// Allows: string1 == string2
bool String::operator==(const String& rhs) const
{
	return strcmp(data, rhs.data) == 0;
}



// OPERATOR [] //

// Allows: change a character
char& String::operator[](int index)
{
	return data[index];
}



// OPERATOR = //

// Allows: string1 = string2
String& String::operator=(const String& rhs)
{
	// Stop from assiging object to itself
	if (this != &rhs)
	{
		// delte old data
		delete[] data;

		int length = rhs.length();

		// Create new memory
		data = new char[length + 1];

		// Cope rhs to data
		strcpy_s(data, length + 1, rhs.data);
	}
	
	// Return string
	return *this;
}



// OPERATOR < //

// Checks alphabet order
bool String::operator<(const String& rhs) const
{
	return strcmp(data, rhs.data) < 0;
}



// OPERATOR + //

// Combines two string ; Return new string
String String::operator+(const String& rhs) const
{
	String result(*this);
	result.append(rhs);
	
	return result;
}




// OPERATOR += //

// Adds rhs to current string
String& String::operator+=(const String& rhs)
{
	append(rhs);

	return *this;
}