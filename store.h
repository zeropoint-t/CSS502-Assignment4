#pragma once
#include<iostream>
#include<fstream>
#include "InventoryMgr.h"
#include "AccountMgr.h"
#include "TransactionMgr"
using namespace std;

class Store {
private:
	InventoryMgr invmgr;
	AccountMgr acctmgr;
	TransactionMgr trnsmgr;
public:
	Store();
	/*Store() {
		invmgr = NULL;
		acctmgr = NULL;
		trnsmgr = NULL;
	}*/

	//~Store();
	void buildInventory(ifstream &InventoryInputFile);
	void buildAccounts(ifstream &AccountsInputFile);
	void buildTransactions(ifstream &TransactionsInputFile);
};