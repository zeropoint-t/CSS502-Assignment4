// ----------------------------------------Media.cpp----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Media - implementation - superclass for all media stored in inventory
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Media.h"

Media::Media(char nMediaType, char nStorageType, int nNumStock)
{
    mediaType = nMediaType;
    storageType = nStorageType;
    numStock = nNumStock;
}
Media::~Media()
{
    
}

//getters
char Media::getMediaType() const
{
    return mediaType;
}
char Media::getStorageType() const
{
    return storageType;
}
int Media::getNumStock() const
{
    return numStock;
}

//setters
void Media::setMediaType(char nMediaType)
{
    mediaType = nMediaType;
}
void Media::setStorageType(char nStorageType)
{
    storageType = nStorageType;
}
void Media::setNumStock(int nNumStock)
{
    numStock = nNumStock;
}

//TODO ---> sort out virtual class implementation
//CLARIFICATION: do these need to be included in the .cpp???
//virtual Media::string getKey() const = 0;//unique key
//virtual bool Media::operator>(Media&) = 0;//less than operator overload for comparison


