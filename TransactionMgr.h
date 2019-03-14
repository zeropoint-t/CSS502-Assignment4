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
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "Transaction.h"
#include "Media.h"
#include "Account.h"
#include "InventoryMgr.h"

using namespace std;

class TransactionMgr
{
private:
    vector<Transaction> trans;
    InventoryMgr* invMgr;

public:
    //constructors & destructor
    TransactionMgr(string infile, InventoryMgr& inv);
    TransactionMgr();
    ~TransactionMgr();

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

TransactionMgr::TransactionMgr(string infile, InventoryMgr& inv)
{

}

TransactionMgr::TransactionMgr()
{

}

TransactionMgr::~TransactionMgr()
{

}

void TransactionMgr::buildTransactions(const string infile)
{
	ifstream file(infile);
	if (!file) 
	{
		cout << "File could not be opened." << endl;
		return;
	}

    while(!file.eof())
    {
        string s;
        getline(file, s);

        istringstream iss(s);
        string command;

        //read word by word
        bool firstIter = true;
        while(iss >> command) {
            if(firstIter)
            {
                firstIter = false;
                if(command == "I"){//show inventory
                    cout << "Inventory" << endl;
                }else if(command == "H"){//shwo transaction history
                    cout << "Show Transaction History" << endl;
                    string acctId;
                    iss >> acctId;
                    int accountId = stoi(acctId);
                }else if(command == "B"){//borrow
                    cout << "Borrow" << endl;
                    string acctId;
                    iss >> acctId;
                    int accountId = stoi(acctId);

                    string storageType;
                    iss >> storageType;

                    //check storage type
                    if(storageType == "D"){//DVD
                        string filmType;
                        iss >> filmType;
                        if(filmType == "F")//funny
                        {
                            string title;
                            getline(iss, title, ',');//read until delimiter
                            string year;
                            iss >> year;
                            cout << "   Borrrow Funny " 
                            << "Title:" << title << " " 
                            << "Year:" << year << endl;
                        }else if(filmType == "C")//classic
                        {
                            string releaseMonth;
                            iss >> releaseMonth;

                            string releaseYear;
                            iss >> releaseYear;

                            string majorActor;
                            getline(iss, majorActor, ',');//read until delimiter

                            cout << "   Borrrow Classic " 
                            << "Release Month:" << releaseMonth << " " 
                            << "Release Year:" << releaseYear << " "
                            << "Major Actor:" << majorActor << endl;
                        }else if(filmType == "D")//drama
                        {
                            string director;
                            getline(iss, director, ',');//read until delimiter

                            string title;
                            getline(iss, title, ',');//read until delimiter

                            cout << "   Borrrow Drama " 
                            << "Director:" << director << " " 
                            << "Title:" << title << endl;
                        }else
                        {
                            cout << "   Wrong Film Type" << endl;
                        }
                    }
                    else{
                        cout << "   Wrong Storage Type" << endl;
                        break;
                    }
                }else if(command == "R"){
                    cout << "Return" << endl;
                }else{
                    cout << "Error command" << endl;
                }
                break;
            }
        }
    }
}

bool TransactionMgr::borrowMedia(const Media&, const Account&, const char actionType)
{
    return true;
}

bool TransactionMgr::returnMedia(const Media&, const Account&, const char actionType)
{
    return true;
}

void TransactionMgr::printAccountHistory(const int acctId) const
{

}

void TransactionMgr::printInventory() const
{

}


#endif
