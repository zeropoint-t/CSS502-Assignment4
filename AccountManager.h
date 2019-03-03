#pragma once
#include "Account.h"
#include "Hash.h"

class AccountManager {
	Hash<Account, int> accounts; // Account and int customerID

public:
	Account CreateAccount(AccountId, LastName, FirstName);
	Account& GetAccount(AccountId : int);
	Account& UpdateAccountHistory();
};