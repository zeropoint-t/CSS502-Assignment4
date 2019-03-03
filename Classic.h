
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
    void setMainActorFirst();
    void setMainActorFLast();
    void setMonth();
    
    void getMainActorFirst() const;
    void getMainActorFLast() const;
    void getMonth() const;
    
    //set actor first + last + month
    Classic(char mediaType, char storageType, int numStock, 
        char filmType, string director, string title, int year, 
        string mainActorFirst, string mainActorLast, int month);

    string getKey() const override;
};

#endif
