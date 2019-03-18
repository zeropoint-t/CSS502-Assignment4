
#ifndef Classic_h
#define Classic_h

#include "Film.h"
#include <string>
using namespace std;

class Classic : public Film
{
private:
	string mainActorFirst;
	string mainActorLast;
	int month;

public:
	//constructors & destructor
	Classic(char nMediaType, char nStorageType, int nNumStock,
		char nFilmType, string nDirector, string nTitle, int nYear,
		string nMainActorFirst, string nMainActorLast, int nMonth);
	Classic();
	~Classic();

	//getters
	string getMainActorFirst() const;
	string getMainActorLast() const;
	int getMonth() const;

	//setters
	void setMainActorFirst(string nMainActorFirst);
	void setMainActorLast(string nMainActorLast);
	void setMonth(int nMonth);

	bool operator>(const Media&) const override;
	bool operator==(const Media&) const override;
	bool operator<(const Media&) const override;
	void printHeader() const override;
	void print() const override;
};

#endif