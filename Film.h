
#ifndef Film_h
#define Film_h

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Media.h"

using namespace std;

class Film : public Media
{
private:
	char filmType;//genre: Comedy(F), Classic(C), Drama(D), etc
	string director;
	string title;
	int year;

public:
	//constructors & destructor
	Film(char mediaType, char storageType, int numStock, char filmType,
		string director, string title, int year);
	Film();
	~Film();

	//getters
	char getFilmType() const;
	string getDirector() const;
	string getTitle() const;
	int getYear() const;

	//setters
	void setFilmType(char nFilmType);
	void setDirector(string nDirector);
	void setTitle(string nTitle);
	void setYear(int nYear);

	// virtual bool operator>(const Media&) const = 0;
	// virtual bool operator==(const Media&) const = 0;
	// virtual bool operator<(const Media&) const = 0;
	bool operator>(const Media&) const override;
	bool operator==(const Media&) const override;
	bool operator<(const Media&) const override;
	void printHeader() const override;
	void print() const override;
};

#endif