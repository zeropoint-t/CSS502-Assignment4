// ----------------------------------------Drama.h------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Drama - implementation - drama genre inherited from Film
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Drama.h"
#include <iostream>
using namespace std;

Drama::Drama(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
             string nDirector, string nTitle, int nYear) : Film(nMediaType, nStorageType, nNumStock, nFilmType, nDirector, nTitle, nYear)
{
    
}
Drama::~Drama()
{
    
}


// -------------------------------getKey()--------------------------------------
// generate key, D key ---> Director and title
// -----------------------------------------------------------------------------
//string Drama::getKey() const //override
//{
//    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
//}


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
    else if (getDirector() == d.getDirector()){
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
    else if (getDirector() == d.getDirector()){
        return (getTitle() > d.getTitle());
    }
    else
        return false;
}

void Drama::display() const
{
    cout << getTitle() << " " << getDirector() << " " << getYear() << endl;
}
