


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

#include "Comedy.h"
#include "Drama.h"
#include "Film.h"
#include "InventoryMgr.h"

using namespace std;

int main() {

    AccountMgr* am = new AccountMgr("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4customers.txt");
    InventoryMgr* inv = new InventoryMgr("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4movies.txt");
    TransactionMgr tmgr(inv, am);
    tmgr.buildTransactions("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4commands.txt");

    cout << endl;
    cout << "GREAT JOB. PROJECT DONE!!!" << endl;

    ;
}
