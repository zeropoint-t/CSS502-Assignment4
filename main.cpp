


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

int main() {
    //test
    Comedy* c = new Comedy('m', 'm', 5, 'F', "Jonesy McFarts", "The FartKnockerz", 1975);
    c->printHeader();
    c->print();
    
//    Classic(char nMediaType, char nStorageType, int nNumStock,
//            char nFilmType, string nDirector, string nTitle, int nYear,
//            string nMainActorFirst, string nMainActorLast, int nMonth);
    Classic* c1 = new Classic('D', 'D', 10, 'C', "Toots McButt","Pull My Finger", 1980, "Sharty", "Pantz", 12);
    
    cout << endl;
    
    c1->printHeader();
    c1->print();
   //link data files w/ software
    // ifstream infile1("data4movies.txt");
    // if (!infile1) {
    //     cout << "File could not be opened." << endl;
    //     return 1;
    // }
    
    // ifstream infile2("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4customers.txt");
    // if (!infile2) {
    //     cout << "File could not be opened." << endl;
    //     return 2;
    // }

//    TransactionMgr tmgr;
//    tmgr.buildTransactions("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4commands.txt");

    // AccountMgr acctmgr("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4customers.txt");
    // Account& acct1 = acctmgr.getAccount(3333);
    // Account& acct2 = acctmgr.getAccount(1111);
    // Account& acct3 = acctmgr.getAccount(0000);



    // Media* com1 = new Comedy('M', 'D', 10, 'F', "Woody Allen", "You've Got Mail", 1977);
    // Media* com2 = new Comedy('M', 'D', 10, 'F', "Nora Ephron", "You've Got Mail", 1998);

    // bool a = (*com1) < (*com2);
    // cout << a << endl;

    // ifstream infile3("data4commands.txt");
    // if (!infile3) {
    //     cout << "File could not be opened." << endl;
    //     return 3;
    // }
    
//    Store s;//create store object
    
//    //part1 ---> build inventory database
//    for (;;){
//        s.buildInventory(infile1);
//        if (infile1.eof())
//            break;
//    }
//
//    //part2 ---> build customer database
//    for (;;){
//        s.buildCustomerList(infile2);
//        if (infile2.eof())
//            break;
//    }
//
//    //part3 ---> process transactions
//    for (;;){
//        s.processTransactions(infile3);
//        if (infile3.eof())
//            break;
//    }
    
    cout << endl;
    cout << "GREAT JOB. PROJECT DONE!!!" << endl;

    ;
}
