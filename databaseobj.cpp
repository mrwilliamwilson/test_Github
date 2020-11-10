#include "databaseobj.h"
#include <iostream>

/**
* default constructor calls the default constructor for all the 
* string objects
*/
DatabaseObject::DatabaseObject() : author(), title(), date() {}

/**
* alternate constructor initialises the strings with literal
* double quoted strings (there is a constructor in the string
* class that takes in a literal string 
*/ 
DatabaseObject::DatabaseObject(const string& who, const string& what, const string& when) :
author(who), title(what), date(when) {}

/**
* display method prints the author, title, date to the screen
*/
void DatabaseObject::display() const
{
	std::cout << "author: " << author << " title: " << title <<
		" date: " << date << "\n";
}

/**
* default constructor calls the default constructor of the base and then
* initialises the painting data
*/
Painting::Painting() : DatabaseObject(), width(0), height(0) {}

/**
* alternate constructor calls the alternate constructor of the base and then
* initialises the painting data
*/
Painting::Painting(const string& who, const string& what, const string& when, int w, int h) :
DatabaseObject(who,what,when), width(w), height(h)  { }

/**
* display implementation calls display from the base and then prints 
* the painting data
*/
void Painting::display() const
{
	DatabaseObject::display();
	std::cout << "width: " << width << " height: " << height << "\n";
}

/**
* default constructor calls the default constructor of the base and then
* initialises the music data
*/
Music::Music() : DatabaseObject(), key() {}


/**
* alternate constructor calls the alternate constructor of the base and then
* initialises the music data
*/
Music::Music(const string& who, const string& what, const string& when, const string& k) :
DatabaseObject(who,what,when), key(k)  { }


/**
* display implementation calls display from the base and then prints 
* the music data
*/
void Music::display() const
{
	DatabaseObject::display();
	std::cout << "key: " << key << "\n";
}

/**
* default constructor calls the default constructor of the music base and then
* initialises the chamber data
*/
Chamber::Chamber() : Music(), num_musicians(0) {}

/**
* alternate constructor calls the alternate constructor of the music base and then
* initialises the chamber data
*/
Chamber::Chamber(const string& who, const string& what, const string& when, const string& k, int num) :
Music(who,what,when,k), num_musicians(num)  { }

/**
* display implementation calls the display method from the music class and then prints 
* the chamber data
*/
void Chamber::display() const
{
	Music::display();
	std::cout << "number musicians: " << num_musicians << "\n";
}

