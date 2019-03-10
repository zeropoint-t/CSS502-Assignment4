// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Transaction - Header file - represents a transaction
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Transaction_h
#define Transaction_h

#include "Account.h"
#include "Media.h"

using namespace std;

class Transaction
{
public:
    Account* account;
    Media* media;
    char actionType;
};

#endif
