// ----------------------------------------AccountMgr.cpp-----------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// AccountMgr - implementation file - represent an account
// -----------------------------------------------------------------------------
// Class stores information about customer loaded from data4commands.txt
// -----------------------------------------------------------------------------

#include "AccountMgr.h"

//constructor
AccountMgr::AccountMgr(string infile)
{
	buildAccounts(infile);
}

AccountMgr::AccountMgr()
{
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

Account& AccountMgr::getAccount(int accountId)
{
	Account* acct = nullptr;
	accounts.get(accountId, acct);
	return *acct;
}
