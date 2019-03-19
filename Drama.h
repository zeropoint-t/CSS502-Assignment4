

#ifndef Drama_h
#define Drama_h

#include "Film.h"
#include <string>

using namespace std;

class Drama : public Film
{
public:
	//constructors & destructor
	Drama(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
		string nDirector, string nTitle, int nYear);
	Drama();
	~Drama();

	bool operator>(const Media&) const override;
	bool operator==(const Media&) const override;
	bool operator<(const Media&) const override;
	//void print() const override;
};

#endif