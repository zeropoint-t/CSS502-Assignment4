// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Film - Header file - represents a film(movie)
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Film_h
#define Film_h

#include "Media.h"
#include <string>

using namespace std;

class Film : public Media
{
private:
    char filmType;//genre: Comedy(F), Classic(C), Drama(D), etc
    string director;
    string title;
    int year;

public:

    //constructors & destructor
    Film(char mediaType, char storageType, int numStock, char filmType, 
        string director, string title, int year);
    ~Film();

    //getters & setters
    void getFilmType() const;
    void getDirector() const;
    void getTitle() const;
    void getYear() const;
    
    void setFilmType();
    void setDirector();
    void setTitle();
    void setYear();    
};

#endif
