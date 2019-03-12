// ----------------------------------------Classic.h----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Classic - header - classic genre inherited from Film
// -----------------------------------------------------------------------------
// extra data fields used in sorting, storing, and hashing: actor name + month
// -----------------------------------------------------------------------------

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
    Classic(char nMediaType, char nStorageType, int nNumStock,
        char nFilmType, string nDirector, string nTitle, int nYear,
        string nMainActorFirst, string nMainActorLast, int nMonth);
    ~Classic();
    
    //getters
    string getMainActorFirst() const;
    string getMainActorLast() const;
    int getMonth() const;
    
    //setters
    void setMainActorFirst(string nMainActorFirst);
    void setMainActorFLast(string nMainActorLast);
    void setMonth(int nMonth);
    
    string getKey() const override;//get a unique key
    
    bool operator>(const Media&) const;
    bool operator==(const Media&) const;
    bool operator<(const Media&) const;
};

#endif
