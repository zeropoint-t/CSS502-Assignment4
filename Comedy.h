
#ifndef Comedy_h
#define Comedy_h

#include <iostream>
#include <iomanip>
#include <string>
#include "Film.h"

using namespace std;

class Comedy : public Film
{
	// friend bool operator>(Media &m1, Media &m2); //Nomember 
public:
	//constructors & destructor
	Comedy(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
		string nDirector, string nTitle, int nYear);
	Comedy();
	~Comedy();

	bool operator>(const Media&) const override;
	bool operator==(const Media&) const override;
	bool operator<(const Media&) const override;
};

#endif