
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
	~AccountMgr();

	// Account& loadAccount(int AcctId, string LastName, string FirstName);//load an account
	// Account& getAccount(int accountId) const;//returns an account object for the accountid
};

//constructor
AccountMgr::AccountMgr(string infile)
{
	buildAccounts(infile);
}

AccountMgr::~AccountMgr()
{

}

void AccountMgr::buildAccounts(string infile)
{
	ifstream file(infile);
	if (!file) 
	{
		cout << "File could not be opened." << endl;
		return;
	}
	int expColCount = 3;
	string lastName = "";
	string firstName = "";
	//read line by line
	while(!file.eof())
	{
		int curColCount = 0;
		int accountId = 0;

		string s;
		getline(file, s);

		istringstream iss(s);
		string word;

		//read word by word
		while(iss >> word) {
			if(curColCount == 0)
				accountId = stoi(word);
			else if(curColCount == 1)
				lastName = word;
			else if(curColCount == 2)
				firstName = word;
			
			curColCount++;
		}

		if(word == "")
			break;

		//create new account object
		Account* pAccout = new Account(accountId, firstName, lastName);

		//add to accounts
		accounts.add(accountId, pAccout);
	}

	accounts.showItems();
}

// void AccountMgr::getAccount(int accountId) const
// {

// }

#endif
