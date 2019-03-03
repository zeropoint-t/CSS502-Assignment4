// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// TransactionMgr - Header file - in charge of processing commands/transactions
//                  (borrow, return, show history, show inventory)
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef TransactionMgr_h
#define TransactionMgr_h

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "InventoryMgr.h"
#include "Media.h"
#include "Account.h"

using namespace std;

class TransactionMgr
{
private:
    vector<Transaction> trans;
    InventoryMgr& invMgr;
    void buildTransactions(const string infile);//read a file and consume each command as a transaction
    /*
        Invariance check:
        action (B R H I) --- invalid action (X Z) ---> use set to check type of command
        video code (C F D) --- invalid code (Y Z) ---> set of video codes
        Media type (D) --- invalid mediatype (anything else) ---> set video
        --- invalid customer id (not in database)
        --- invalid movie tile (BLAH BLA BLAH BOGUS)
        --- bring stock below 0
        --- returning movies not borrowed
    */

public:
    //constructors & destructor
    TransactionMgr(string infile, InventoryMgr& inv);
    ~TransactionMgr();

    bool borrowMedia(const Media&, const Account&, const char actionType);//borrow media
    /*    
        //assume that invariance checks have been done already
        create a transaction object for borrow action
        push the object to transaction vector
        return true
    */
    bool returnMedia(const Media&, const Account&, const char actionType);//return media
    /*
        //assume that invariance checks have been done already
        create a transaction object for return action
        push the object to transaction vector
        return true;
    */

    void printAccountHistory(const int acctId) const;//print transaction history for this account
    /*
        iterate through each trans in trans vector from the beginnig to the end
        as we find transactins for this account, push them into a stack
        iterate through the stack and print each trasaction from the latest to the oldest
    */

    void printInventory() const;//print inventory
};
#endif