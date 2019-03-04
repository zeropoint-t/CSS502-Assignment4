
// ------------------------------------------------ file name -------------------------------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/03/2019
// ------------------------------------------------------------------------------------------------------------------
// Account - Header file - represent an account
// ------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// ------------------------------------------------------------------------------------------------------------------

#ifndef Account_h
#define Account_h

#include <string>

using namespace std;

class Account {
private:
	string firstName;
	string lastName;
	int accountId;
	int points;
	bool flagged=false;
public:
	//constructors & destructor
	Account(int acctId, string lastName, string fisrtName);
	~Account();

	//getters & setters
	string getFirstName() const;
    string getLastName() const;
    int getAccountId() const;
    
    void setFirstName(string);
    void setLastName(string);
    void setAccountId(int);
};

#endif
