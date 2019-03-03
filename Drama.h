#ifndef Drama_h
#define Drama_h

#include "Film.h"
#include <string>

using namespace std;

class Drama : public Film
{
public:
    Drama(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);

    string getKey() const override;
};

#endif