// ----------------------------------------Comedy.h-----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Comedy - header - comedy genre inherited from Film
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------

#ifndef Comedy_h
#define Comedy_h

#include "Film.h"
#include <string>

using namespace std;

class Comedy : public Film
{
    // friend bool operator>(Media &m1, Media &m2); //Nomember 
public:
    //constructors & destructor
    Comedy(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
           string nDirector, string nTitle, int nYear);
    Comedy();
    ~Comedy();
   
    bool operator>(const Media&) const override;
    bool operator==(const Media&) const override;
    bool operator<(const Media&) const override;
    void display() const override;
};

#endif
