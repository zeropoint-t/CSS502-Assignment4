// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Comedy - Header file - represents a classic movie
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Classic_h
#define Classic_h

#include "Film.h"
#include <string>
using namespace std;

class Classic : public Film
{
private:
    string mainActorFirst;
    string mainActorLast;
    int month;

public:
    //constructors & destructor
    Classic(char mediaType, char storageType, int numStock, 
        char filmType, string director, string title, int year, 
        string mainActorFirst, string mainActorLast, int month);
    ~Classic();
    
    //getters & setters
    void setMainActorFirst();
    void setMainActorFLast();
    void setMonth();
    
    void getMainActorFirst() const;
    void getMainActorFLast() const;
    void getMonth() const;
    
    string getKey() const override;//get a unique key
};

#endif
