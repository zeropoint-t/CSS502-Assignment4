#ifndef Film_h
#define Film_h

#include "Media.h"
#include <string>

using namespace std;

class Film : public Media
{
private:
    char filmType;
    string director;
    string title;
    int year;

public:
    void getFilmType() const;
    void getDirector() const;
    void getTitle() const;
    void getYear() const;
    
    void setFilmType();
    void setDirector();
    void setTitle();
    void setYear();

    Film(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);
    
};

#endif
