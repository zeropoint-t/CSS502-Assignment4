// ----------------------------------Transaction.h------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Transaction - header - transaction item stored in vector in TransactionMgr
// contains info on which account, type of media, and type of transaction occured
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Transaction.h"

//getters
Account* Transaction::getAccount() const
{
    return account;
}
Media* Transaction::getMedia() const
{
    return media;
}

char Transaction::getActionType() const
{
    return actionType;
}

//setters
void Transaction::setAccount(Account* nAccount)
{
    
}
void Transaction::setMedia(Media* nMedia)
{
    
}
void Transaction::setActionType(char getActionType)
{
    
}

