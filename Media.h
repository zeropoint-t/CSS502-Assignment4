#ifndef Media_h
#define Media_h

#include <string>

using namespace std;

class Media
{
private:
    char mediaType;
    char storageType;
    int numStock;
    
public:
    Media(char mediaType, char storageType, int numStock);
    ~Media();

    char getMediaType() const;
    char getStorageType() const;
    int getNumStock() const;
    
    void setMediaType(char);
    void setStorageType(char);
    void setNumStock(int);
    
    virtual string getKey() const = 0;
};

#endif
