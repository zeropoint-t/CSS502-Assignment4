


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
// #include "Store.h"
#include "AccountMgr.h"

using namespace std;

int main() {
    
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

    AccountMgr acctmgr("/Users/tetsuya/Documents/Projects/CSS502AHW4/CSS502-Assignment4/data4customers.txt");
    //3 genres
    //3 operators
    //Comedy(nMediaType nStorageTypenNu mStock nFilmType nDirector nTitle  nYear
    //
    Media* com1 = new Comedy('M', 'D', 10, 'F', "A", "A", 1977);
    Media* com2 = new Comedy('M', 'D', 10, 'F', "A", "A", 1977);
    Media* com3 = new Comedy('M', 'D', 10, 'F', "A", "A", 1977);

    bool a = *com1 > *com2;
    cout << a << endl;
    
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
    
    cout << "GREAT JOB. PROJECT DONE!!!" << endl;

    return 0;
}
