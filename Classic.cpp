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
string Classic::getMainActorFLast() const
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

// -------------------------------getKey()--------------------------------------
// generate key, C key --->  title, year release
// -----------------------------------------------------------------------------
string Classic::getKey() const //override
{
    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
}

