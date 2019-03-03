
#ifndef Store_h
#define Store_h

#include<iostream>
#include<fstream>
#include "InventoryMgr.h"
#include "AccountMgr.h"
#include "TransactionMgr.h"
using namespace std;

class Store 
{
private:
	InventoryMgr* invMgr;
	AccountMgr* acctMgr;
	TransactionMgr* trnsMgr;

public:
	Store();
	~Store();

	void buildInventory(ifstream &InventoryInputFile);
	void buildAccounts(ifstream &AccountsInputFile);
	void buildTransactions(ifstream &TransactionsInputFile);
};

#endif