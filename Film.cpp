
#include "Film.h"

Film::Film(char nMediaType, char nStorageType, int nNumStock, char nFilmType, string nDirector, string nTitle, int nYear) : Media(nMediaType, nStorageType, nNumStock)
{
	setFilmType(nFilmType);
	setDirector(nDirector);
	setTitle(nTitle);
	setYear(nYear);
}

Film::Film() {}

Film::~Film()
{

}

//getters
char Film::getFilmType() const
{
	return filmType;
}
string Film::getDirector() const
{
	return director;
}
string Film::getTitle() const
{
	return title;
}
int Film::getYear() const
{
	return year;
}

//setters
void Film::setFilmType(char nFilmType)
{
	filmType = nFilmType;
}
void Film::setDirector(string nDirector)
{
	director = nDirector;
}
void Film::setTitle(string nTitle)
{
	title = nTitle;
}
void Film::setYear(int nYear)
{
	year = nYear;
}



// -----------operator==(const Comedy& rhs)--------------------------------------
// check if lhs comedy is identical to rhs comedy by title and year
// -----------------------------------------------------------------------------
bool Film::operator==(const Media& rhs) const {
	return true;
}

// -----------operator<(const Comedy& rhs)--------------------------------------
// check if lhs comedy comes before rhs comedy by title, then by year
// -----------------------------------------------------------------------------
bool Film::operator<(const Media& rhs) const
{
	return false;
}
// -----------operator>(const Comedy& rhs)--------------------------------------
// check if lhs comedy comes before rhs comedy by title, then by year
// -----------------------------------------------------------------------------
bool Film::operator>(const Media& rhs) const
{
	return false;
}

void Film::printHeader() const
{
	cout << left << setw(5) << "<IN>" << left << setw(6) << "<OUT>" << left << setw(20) << "<DVD - TITLE>" << left << setw(20) << "<DIRECTOR>"
		<< left << setw(10) << "<YEAR>" << endl;
	cout <<
		"---------------------------------------------------------"
		<< endl;
}
void Film::print() const
{

	cout << " " << setw(5) << getNumStock() << setw(6) << getMaxStock() - getNumStock() << left << setw(20) << getTitle() << left << setw(20) << getDirector() << left << setw(10) << getYear() << endl;
}