// ----------------------------------------Film.h-------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Film - header - superclass from which genres are derived
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------

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
    Film();
    ~Film();

    //getters
    char getFilmType() const;
    string getDirector() const;
    string getTitle() const;
    int getYear() const;
    
    //setters
    void setFilmType(char nFilmType);
    void setDirector(string nDirector);
    void setTitle(string nTitle);
    void setYear(int nYear);
    
    // virtual bool operator>(const Media&) const = 0;
    // virtual bool operator==(const Media&) const = 0;
    // virtual bool operator<(const Media&) const = 0;
    bool operator>(const Media&) const override;
    bool operator==(const Media&) const override;
    bool operator<(const Media&) const override;
};

#endif
