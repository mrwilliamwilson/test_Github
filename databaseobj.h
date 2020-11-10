#include <string>
using namespace std;

/**
* A base class representing a general cultural
* artefact. The display method is virtual and has an implementation in the base
*/
class DatabaseObject {
private:
	string author;	
	string title;
	string date;
public:
	DatabaseObject();
	DatabaseObject(const string& who, const string& what, const string& when);
	virtual void display() const;
};

/**
* A derived painting class
* The display method is implemented
*/
class Painting : public DatabaseObject {
private:
	int width;
	int height;
public:
	Painting();
	Painting(const string& who, const string& what, const string& when, int w, int h);
	void display() const;
};


/**
* A derived music class
* The display method is implemented
*/
class Music: public DatabaseObject {
private:
	std::string key;
public:
	Music();
	Music(const string& who, const string& what, const string& when, const string& k);
	void display() const;
};


/**
* A derived class from Music
* The display method is implemented
*/
class Chamber: public Music {
private:
	int num_musicians;
public:
	Chamber();
	Chamber(const string& who, const string& what, const string& when, const string& k, int num);
	void display() const;
};



