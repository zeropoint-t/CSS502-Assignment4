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

class Classic : Film
{
    string mainActorFirst;
    string mainActorLast;
    int month

public:
    
    void setMainActorFirst();
    void setMainActorFLast();
    void setMonth();
    
    void getMainActorFirst();
    void getMainActorFLast();
    void getMonth();
    
    //set actor first + last + month
    film(mediaType, storageType, numStock, filmType, director, title, year, mainActorFirst, mainActorLast, month);

};

#endif /* Film_hpp */
