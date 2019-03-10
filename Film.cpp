// ----------------------------------------Film.cpp-----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Film - implementation - superclass from which genres are derived
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------

#include "Film.h"

Film::Film(char nMediaType, char nStorageType, int nNumStock, char nFilmType, string nDirector, string nTitle, int nYear) : Media(nMediaType, nStorageType, nNumStock)
{
    setFilmType(nFilmType);
    setDirector(nDirector);
    setTitle(nTitle);
    setYear(nYear);
}
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
