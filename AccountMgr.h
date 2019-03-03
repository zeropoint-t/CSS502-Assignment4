
#ifndef AccuntMgr_h
#define AccuntMgr_h

#include "Account.h"
#include "Hash.h"

class AccountMgr {
private:
	Hash<int, Account*> accounts; // Account and int customerID
	void buildAccounts(string infile);

public:
	AccountMgr(string infile);
	~AccountMgr();
	Account& loadAccount(int AcctId, string LastName, string FirstName);
	Account& getAccount(int AcctId) const;
};

#endif