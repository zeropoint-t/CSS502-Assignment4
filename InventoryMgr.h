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
    /*
        buildInv(){
        Invariance - check for false input
        *cycle through infile
        *get genre(film type)
        *check if genre is legitamate
        *parse based on genre -> create key/string
        *check if film in system if YES update stock ELSE
        *call appropriate constructor(FUNNY(FILM INFO) CLASSIC(FILM INFO) DRAMA(FILM INFO, key))
    */
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