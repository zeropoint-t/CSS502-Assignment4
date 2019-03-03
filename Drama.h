// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Film - Header file - represents a drama movie
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Drama_h
#define Drama_h

#include "Film.h"
#include <string>

using namespace std;

class Drama : public Film
{
public:
    //constructors & destructor
    Drama(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);
    ~Drama();

    string getKey() const override;//get a unique key
};

#endif