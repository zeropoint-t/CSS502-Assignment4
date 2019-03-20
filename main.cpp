// #include "DRIVER FOR ASSIGNMENT $.hpp"
// Driver:
// Input files
// *Build inventory
// *Build customer list
// *Transactions

#include <iostream>
#include <fstream>

#include "Media.h"
#include "Comedy.h"
#include "Account.h"
#include "AccountMgr.h"
#include "TransactionMgr.h"

using namespace std;

int main() 
{
    
    AccountMgr acctmgr("data4customers.txt");
    InventoryMgr invmgr("data4movies.txt");
    TransactionMgr tmgr(&invmgr, &acctmgr);
    tmgr.buildTransactions("data4commands.txt");

    cout << "GREAT JOB. PROJECT DONE!!!" << endl;

    return 0;
}
