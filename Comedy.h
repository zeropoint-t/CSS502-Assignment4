#ifndef Comedy_h
#define Comedy_h

#include "Film.h"
#include <string>

using namespace std;

class Comedy : public Film
{
public:
    Comedy(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);

    string getKey() const override;
};

#endif