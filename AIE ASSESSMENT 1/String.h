#pragma once


// Custom String Class
class String
{
private:
	// Stores Char in Str
	char* data;

public:
	// Constructors
	String();
	String(const char* str);
	String(const String& other);

	// Destructor
	~String();

	// Return int representing the count of characters
	int length() const;

	// Return char representing the char at location
	char characterAt(int index) const;

	// Return true if str constain same characters
	bool equalTo(const String& str) const;

	// Adds str to end of string
	void append(const String& str);

	// adds str to beginning of string
	void prepend(const String& str);

	// Return the const char* 
	const char* Cstr() const;

	// Convert all characters to lowercase
	void toLower();

	// Convert all characters to uppercase
	void toUpper();

	// Return the location of findString
	int find(const String& findString) const;

	// Return the location of strToFind
	int find(int startIndex, const String& findString) const;

	// Replace all occurences of findString
	void replace(const String& findString, const String& replaceString);

	// Wait for input in console window
	void readFromConsole();

	// Write the string to console
	void writeToConsole() const;

	// Returns if ihs == rhs
	bool operator==(const String& rhs) const;

	// Returns character located at position n
	char& operator[](int index);
	const char& operator[](int index) const;

	// Replaces charcters in lhs with rhs characters
	String& operator=(const String& rhs);

	// Return true if string comes before rhs in alphabet
	bool operator<(const String& rhs) const;

	// Return a new string that combines lhs and rhs
	String operator+(const String& rhs) const;

	// Modifies lhs , appending rhs to ihs 
	String& operator+=(const String& rhs);
};