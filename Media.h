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

class Media
{
    char mediaType;
    char storageType;
    int numStock;
    
public:
    
    void getMediaType;
    void getStorageType;
    void getNumStock;
    
    void setMediaType;
    void setStorageType;
    void setNumStock;
    
    Media(mediaType, StorageType, numStock);
};

#endif /* Film_hpp */
