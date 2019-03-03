
#ifndef Account_h
#define Account_h

#include <string>

using namespace std;

class Account {
private:
	string firstName;
	string lastName;
	int accountId;
public:
	Account(int acctId, string lastName, string fisrtName);
	~Account();

	string getFirstName() const;
    string getLastName() const;
    int getAccountId() const;
    
    void setFirstName(string);
    void setLastName(string);
    void setAccountId(int);
};

#endif