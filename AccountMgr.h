
// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// AccountMgr - Header file - in charge of account related tasks
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef AccuntMgr_h
#define AccuntMgr_h

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>

#include "Account.h"
#include "HashTable.h"

using namespace std;

class AccountMgr {
private:
    HashTable<int, Account*> accounts; // Account and int customerID
	void buildAccounts(string);

public:
	//constructors & destructor
	AccountMgr(string);
	AccountMgr();
	~AccountMgr();

	// Account& loadAccount(int AcctId, string LastName, string FirstName);//load an account
	Account* getAccount(int accountId);//returns an account object for the accountid
};

#endif
