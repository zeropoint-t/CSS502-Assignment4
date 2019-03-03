#ifndef Transaction_h
#define Transaction_h

#include <Account.h>
#include <Media.h>

using namespace std;

class Transaction
{
public:
    Account* account;
    Media* media;
    char actionType;
};

#endif
