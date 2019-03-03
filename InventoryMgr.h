#ifndef InventoryMgr_h
#define InventoryMgr_h

#include <iostream>
#include <string>
#include "Hash.h"
#include "Transaction.h"

using namespace std;

class InventoryMgr
{
private:
    void buildInv(string filePath);
    Hash<string, int> inventory;
    void sort();
public:
    InventoryMgr(string infile);
    ~InventoryMgr();
    
    bool incInv(string key);
    bool decInv(string key);
    int getStock(string key) const;
    void printInv() const;
};

#endif