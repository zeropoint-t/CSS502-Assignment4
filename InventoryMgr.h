// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// InventoryMgr - Header file - in charge of inventory related tasks
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef InventoryMgr_h
#define InventoryMgr_h

#include <iostream>
#include <string>
#include "HashTable.h"
#include "Transaction.h"
#include "Media.h"

using namespace std;

class InventoryMgr
{
private:
    HashTable<string, Media*> inventory;//key:film type(C,F,D), value:Media pointer
    void sort();
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

public:
    //constructors & destructor
    InventoryMgr();
    InventoryMgr(string infile);
    ~InventoryMgr();

    bool incInv(string key);//increment stock count
    bool decInv(string key);//decrement stock count
    int getStock(string key) const;//return s
    //Stock count
    void printInv() const;//print inventory
};

#endif
