// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Comedy - Header file - represents a comedy movie
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Comedy_h
#define Comedy_h

#include "Film.h"
#include <string>

using namespace std;

class Comedy : public Film
{
public:
    //constructors & destructor
    Comedy(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);
    ~Comedy();

    string getKey() const override;//get a unique key
};

#endif