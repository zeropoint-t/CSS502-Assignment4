
#include "Drama.h"
#include <iostream>

using namespace std;

Drama::Drama(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
	string nDirector, string nTitle, int nYear) : Film(nMediaType, nStorageType, nNumStock, nFilmType, nDirector, nTitle, nYear)
{

}

Drama::Drama(){}

Drama::~Drama()
{

}

//<<<<<<< HEAD
//=======

// -------------------------------getKey()--------------------------------------
// generate key, D key ---> Director and title
// -----------------------------------------------------------------------------
//string Drama::getKey() const //override
//{
//    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
//}


//>>>>>>> 9448bef65f5bb588cca731eef8b4f36f284f7a99
// -----------operator==(const Drama& rhs)--------------------------------------
// check if lhs drama is identical to rhs drama by director and title
// -----------------------------------------------------------------------------
bool Drama::operator==(const Media& rhs) const {

	const Drama& d = static_cast<const Drama&>(rhs);

	return (getDirector() == d.getDirector() && getTitle() == d.getTitle());
}


// -----------operator<(const Drama& rhs)--------------------------------------
// check if lhs drama comes before rhs drama by director, then by title
// -----------------------------------------------------------------------------
bool Drama::operator<(const Media& rhs) const
{
	const Drama& d = static_cast<const Drama&>(rhs);

	if (getDirector() < d.getDirector())
		return true;
	else if (getDirector() == d.getDirector()) {
		return (getTitle() < d.getTitle());
	}
	else
		return false;
}
// -----------operator>(const Drama& rhs)--------------------------------------
// check if lhs drama comes before rhs drama by director, then by title
// -----------------------------------------------------------------------------
bool Drama::operator>(const Media& rhs) const
{
	const Drama& d = static_cast<const Drama&>(rhs);

	if (getDirector() > d.getDirector())
		return true;
	else if (getDirector() == d.getDirector()) {
		return (getTitle() > d.getTitle());
	}
	else
		return false;
}

//void Drama::print() const
//{
//	//D key ---> Director and title
//	//cout << left << setw(25) << getDirector() << setw(20)<<" " << getTitle() << endl;
//	Film::print();
//}