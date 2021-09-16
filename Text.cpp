#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstring>
#include "Text.h"

Text::Text ( const char *charSeq )
{
}

Text::Text ( const Text &other )
{
}

void Text::operator = ( const Text &other )
{
}

Text::~Text ()
{
}

int Text::getLength () const
{
	return -1;
}

char Text::operator [] ( int n ) const
{
	return 0;
}

void Text::clear ()
{
}

void Text::showStructure() const

// Outputs the characters in a string. This operation is intended for
// testing/debugging purposes only.

{
	int j;   // Loop counter

	for (j = 0; j < bufferSize; j++)
		cout << j << "\t";
	cout << endl;
	for (j = 0; buffer[j] != '\0'; j++)
		cout << buffer[j] << "\t";
	cout << "\\0" << endl;
}

Text Text::toUpper( ) const
{
	Text temp;
	return temp;
}

Text Text::toLower( ) const
{
	Text temp;
	return temp;
}

bool Text::operator == ( const Text& other ) const
{
	return false;
}

bool Text::operator <  ( const Text& other ) const
{
	return false;
}

bool Text::operator >  ( const Text& other ) const
{
	return false;
}
