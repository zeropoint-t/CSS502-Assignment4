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
    void buildTransactions(const string infile);
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
    TransactionMgr(string infile, InventoryMgr& inv);
    ~TransactionMgr();

    bool borrowMedia(const Media&, const Account&, const char actionType);
    /*
        create transaction object
        push the object to transaction vector
        return true;
    */
    bool returnMedia(const Media&, const Account&, const char actionType);
    void printAccountHistory(const int acctId) const;
    /*
        iterate through each trans in trans vector from the beginnig to the end
        as we find transactin for this account, we push the trans into a stack
        iterate through the stack and print each trasaction from the latest to the oldest
    */
    void printInventory() const;
};
#endif