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

class Drama : public Film
{
    //set film type D ---> Drama
    film(mediaType, storageType, numStock, filmType, director, title, year);

};

#endif /* Film_hpp */
