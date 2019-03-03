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

public:
    TransactionMgr(string filePath, InventoryMgr& inv);
    ~TransactionMgr();

    void borrowMedia(const Media&, const Account&, const char actType);
    void returnMedia(const Media&, const Account&, const char actType);
    void showAccountHistory(const int acctId) const;
    void showInventory() const;
};
#endif