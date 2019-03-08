
// ----------------------------------------Media.h------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Media - header - superclass for all media stored in inventory
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------

#ifndef Media_h
#define Media_h

#include <string>
#include <vector>

using namespace std;

class Media
{
private:
    char mediaType;//movie, music, etc
    char storageType;//DVD, CD, etc
    int numStock;//stock count
    vector<Media> mediaVect;
    
public:
    //constructors & destructor
    Media(char mediaType, char storageType, int numStock);
    ~Media();

    //getters/setters
    char getMediaType() const;
    char getStorageType() const;
    int getNumStock() const;
    
    void setMediaType(char);
    void setStorageType(char);
    void setNumStock(int);
    
    virtual string getKey() const = 0;//unique key
    virtual bool operator>(Media&) = 0;//less than operator overload for comparison
};

#endif
