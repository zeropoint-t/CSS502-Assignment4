// ----------------------------------------Comedy.cpp---------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Comedy - implementation - comedy genre inherited from Film
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Comedy.h"

Comedy::Comedy(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
             string nDirector, string nTitle, int nYear) : Film(nMediaType, nStorageType, nNumStock, nFilmType, nDirector, nTitle, nYear)
{
    
}
Comedy::~Comedy()
{
    
}

// -----------operator==(const Comedy& rhs)--------------------------------------
// check if lhs comedy is identical to rhs comedy by title and year
// -----------------------------------------------------------------------------
bool Comedy::operator==(const Media& rhs) const {
    const Comedy& c = static_cast<const Comedy&>(rhs);
    return (getTitle() == c.getTitle() && getYear() == c.getYear());
}


// -----------operator<(const Comedy& rhs)--------------------------------------
// check if lhs comedy comes before rhs comedy by title, then by year
// -----------------------------------------------------------------------------
bool Comedy::operator<(const Media& rhs) const
{
    const Comedy& c = static_cast<const Comedy&>(rhs);
    
    if (getTitle() < c.getTitle())
        return true;
    else if (getTitle() == c.getTitle()){
        return (getYear() < c.getYear());
    }
    else
        return false;
}
// -----------operator>(const Comedy& rhs)--------------------------------------
// check if lhs comedy comes before rhs comedy by title, then by year
// -----------------------------------------------------------------------------
bool Comedy::operator>(const Media& rhs) const
{
    const Comedy& c = static_cast<const Comedy&>(rhs);
    if (getTitle() > c.getTitle())
        return true;
    else if (getTitle() == c.getTitle()){
        return (getYear() > c.getYear());
    }
    else
        return false;
}

// -------------------------------getKey()--------------------------------------
// generate key, F key ---> release date and actor
// -----------------------------------------------------------------------------
//C key --->  title, year release
string Comedy::getKey() const //override
{
    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
}
