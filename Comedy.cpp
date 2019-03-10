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
//C key --->  title, year release

// -------------------------------getKey()--------------------------------------
// generate key, F key ---> release date and actor
// -----------------------------------------------------------------------------
string Comedy::getKey() const //override
{
    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
}
