// ----------------------------------------Classic.cpp----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Classic - implementation - Classic genre inherited from Film
// -----------------------------------------------------------------------------
// extra data fields used in sorting, storing, and hashing: actor name + month
// -----------------------------------------------------------------------------

#include "Classic.h"
#include <iostream>

//string mainActorFirst;
//string mainActorLast;
//int month;


//constructors & destructor
Classic::Classic(char nMediaType, char nStorageType, int nNumStock,
                 char nFilmType, string nDirector, string nTitle, int nYear,
                 string nMainActorFirst, string nMainActorLast, int nMonth) : Film(nMediaType, nStorageType, nNumStock, nFilmType, nDirector, nTitle, nYear)
{
    setMainActorFirst(nMainActorFirst);
    setMainActorFLast(nMainActorLast);
    setMonth(nMonth);
}

Classic::~Classic()
{
    
}

//getters
string Classic::getMainActorFirst() const
{
    return  mainActorFirst;
}
string Classic::getMainActorLast() const
{
    return mainActorLast;
}
int Classic::getMonth() const
{
    return month;
}

//setters
void Classic::setMainActorFirst(string nMainActorFirst)
{
    mainActorFirst = nMainActorFirst;
}
void Classic::setMainActorFLast(string nMainActorLast)
{
    mainActorFirst = nMainActorLast;
}
void Classic::setMonth(int nMonth)
{
    month = nMonth;
}

// -----------operator==(const Classic& rhs)--------------------------------------
// check if lhs classic is identical to rhs classic by year and actor
// -----------------------------------------------------------------------------
bool Classic::operator==(const Media& rhs) const {
    
    const Classic& c = static_cast<const Classic&>(rhs);
    return (getYear() == c.getYear() && getMonth() == c.getMonth()
            && getMainActorFirst() == getMainActorFirst() &&
            getMainActorLast() == c.getMainActorLast());
}


// -----------operator<(const Classic& rhs)--------------------------------------
// check if lhs classic comes before rhs classic by year, then by actor
// -----------------------------------------------------------------------------
bool Classic::operator<(const Media& rhs) const
{
    const Classic& c = static_cast<const Classic&>(rhs);
    
    if (getYear() < c.getYear())
        return true;
    else if (getYear() == c.getYear()){
        if (getMainActorFirst() < c.getMainActorFirst())
        {
            return true;
        }
        else if (getMainActorFirst() == c.getMainActorFirst())
        {
            return (getMainActorLast() < c.getMainActorLast());
        }
        else
            return false;
    }
    else
        return false;
}
// -----------operator>(const Classic& rhs)--------------------------------------
// check if lhs classic comes before rhs classic by year, then by actor
// -----------------------------------------------------------------------------
bool Classic::operator>(const Media& rhs) const
{
    const Classic& c = static_cast<const Classic&>(rhs);
    if (getYear() > c.getYear())
        return true;
    else if (getYear() == c.getYear()){
        if (getMainActorFirst() > c.getMainActorFirst())
        {
            return true;
        }
        else if (getMainActorFirst() == c.getMainActorFirst())
        {
            return (getMainActorLast() > c.getMainActorLast());
        }
        else
            return false;
    }
    else
        return false;
}
void Classic::display() const
{
    std::cout << getTitle();
}

