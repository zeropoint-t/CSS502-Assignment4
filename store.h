// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Store - Header file - represents a media rental store
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

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
	vector<Store> storesVect;

public:
	//constructors & destructor
	Store();
	~Store();

	void buildInventory(ifstream &InventoryInputFile);//build
	void buildAccounts(ifstream &AccountsInputFile);
	void buildTransactions(ifstream &TransactionsInputFile);
};

#endif
