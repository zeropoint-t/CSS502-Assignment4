
// ----------------------------------------Account.h----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Account - header file - represent an account
// -----------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// -----------------------------------------------------------------------------

#ifndef Account_h
#define Account_h

#include <string>

using namespace std;

class Account {
private:
    int accountId;
    string firstName;
    string lastName;
	//int points; ---> implement in extension
	//bool flagged=false; ---> implement in extension
public:
	//constructors & destructor
	Account(int nAccountId, string nFisrtName, string nLastName);
	~Account();

	//getters
	string getFirstName() const;
    string getLastName() const;
    int getAccountId() const;
    
    //setters
    void setFirstName(string);
    void setLastName(string);
    void setAccountId(int);
};

#endif
