//
//  Film.hpp
//  
//
//  Created by You on 3/2/19.
//

#ifndef Film_hpp
#define Film_hpp

#include "Media"
#include <string>
using namespace std;

class Film : public Media
{
    char filmType;
    string director;
    string title;
    int year;

public:
    
    void getTypeOfFilm();
    void getDirector();
    void getTitle();
    void getYear();
    
    void setTypeOfFilm();
    void setDirector();
    void setTitle();
    void setYear();
    
    film(mediaType, storageType, numStock, filmType, director, title, year);
    
};

#endif /* Film_hpp */
