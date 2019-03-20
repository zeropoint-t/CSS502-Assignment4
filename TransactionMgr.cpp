#include "TransactionMgr.h"

TransactionMgr::TransactionMgr(InventoryMgr* inv, AccountMgr* aMgr)
:invMgr(inv), acctMgr(aMgr)
{

}

TransactionMgr::TransactionMgr()
{

}

TransactionMgr::~TransactionMgr()
{

}

void TransactionMgr::buildTransactions(const string infile)
{
	ifstream file(infile);
	if (!file) 
	{
		cout << "File could not be opened." << endl;
		return;
	}

    while(!file.eof())
    {
        string s;
        getline(file, s);

        istringstream iss(s);
        char command;

        //read word by word
        bool firstIter = true;
        while(iss >> command) {
            if(firstIter)
            {
                firstIter = false;
                if(command == 'I'){//show inventory
                    invMgr->printInv();
                }else if(command == 'H'){//shwo transaction history
                    string acctId;
                    iss >> acctId;
                    int accountId = stoi(acctId);
                    printAccountHistory(accountId);
                }else if(command == 'B'){//borrow
                    string acctId;
                    iss >> acctId;
                    int accountId = stoi(acctId);

                    //check account is valid
                    if(acctMgr != nullptr)
                    {
                        Account* pAcct = acctMgr->getAccount(accountId);
                        if(pAcct == nullptr)//check if this account exists
                        {
                            cout << "   CustomerId is " << accountId << " is not valid" << endl;
                            break;
                        }

                        char storageType;
                        iss >> storageType;

                        //check storage type
                        if(storageType == 'D'){//DVD
                            char filmType;
                            iss >> filmType;
                            if(filmType == 'F')//funny
                            {
                                //find a title
                                string title;
                                getline(iss, title, ',');//read until delimiter
                                title = trimLeadingAndTrailingSpaces(title);

                                //find a release year
                                string year;
                                iss >> year;
                                
                                //create a stub Comedy object
                                Comedy c('M', storageType, 0, filmType, "", title, stoi(year));
                                Media* pMed = invMgr->getMedia(c);
                                if(pMed != nullptr && pMed->getNumStock() > 0)
                                {
                                    borrowMedia(pMed, pAcct, command);
                                }else
                                {
                                    cout << "Out of stock" << endl;
                                }                               
                            }else if(filmType == 'C')//classic
                            {
                                string releaseMonth;
                                iss >> releaseMonth;

                                string releaseYear;
                                iss >> releaseYear;

                                string majorActorFirstName;
                                iss >> majorActorFirstName;

                                string majorActorLastName;
                                iss >> majorActorLastName;  

                                //create a stub object
                                Classic c('M', storageType, 0, filmType, "", ""
                                , stoi(releaseYear), majorActorFirstName, majorActorLastName, stoi(releaseMonth));
                                Media* pMed = invMgr->getMedia(c);
                                if(pMed != nullptr && pMed->getNumStock() > 0)
                                {
                                    borrowMedia(pMed, pAcct, command);
                                }else
                                {
                                    cout << "Out of stock" << endl;
                                }   
                            }else if(filmType == 'D')//drama
                            {
                                string director;
                                getline(iss, director, ',');//read until delimiter
                                director = trimLeadingAndTrailingSpaces(director);

                                string title;
                                getline(iss, title, ',');//read until delimiter
                                title = trimLeadingAndTrailingSpaces(title);

                                //create a stub object
                                Drama d('M', storageType, 0, filmType, director, title, 0);
                                Media* pMed = invMgr->getMedia(d);
                                if(pMed != nullptr && pMed->getNumStock() > 0)
                                {
                                    borrowMedia(pMed, pAcct, command);
                                }else
                                {
                                    cout << "Out of stock" << endl;
                                }   
                            }else
                            {
                                cout << "Wrong Film Type" << endl;
                            }
                        }
                    }
                    else{
                        cout << "Wrong Storage Type" << endl;
                        break;
                    }
                }else if(command == 'R'){
                    string acctId;
                    iss >> acctId;
                    int accountId = stoi(acctId);

                    //check account is valid
                    if(acctMgr != nullptr)
                    {
                        Account* pAcct = acctMgr->getAccount(accountId);
                        if(pAcct == nullptr)//check if this account exists
                        {
                            cout << "   CustomerId is " << accountId << " is not valid" << endl;
                            break;
                        }

                        char storageType;
                        iss >> storageType;

                        //check storage type
                        if(storageType == 'D'){//DVD
                            char filmType;
                            iss >> filmType;
                            if(filmType == 'F')//funny
                            {
                                //find a title
                                string title;
                                getline(iss, title, ',');//read until delimiter
                                title = trimLeadingAndTrailingSpaces(title);

                                //find a release year
                                string year;
                                iss >> year;
                                
                                //create a stub Comedy object
                                Comedy c('M', storageType, 0, filmType, "", title, stoi(year));
                                Media* pMed = invMgr->getMedia(c);
                                if(pMed != nullptr)
                                {
                                    returnMedia(pMed,pAcct,command);
                                }       
                            }else if(filmType == 'C')//classic
                            {
                                string releaseMonth;
                                iss >> releaseMonth;

                                string releaseYear;
                                iss >> releaseYear;

                                string majorActorFirstName;
                                iss >> majorActorFirstName;

                                string majorActorLastName;
                                iss >> majorActorLastName;  

                                //create a stub object
                                Classic c('M', storageType, 0, filmType, "", ""
                                , stoi(releaseYear), majorActorFirstName, majorActorLastName, stoi(releaseMonth));
                                Media* pMed = invMgr->getMedia(c);
                                if(pMed != nullptr)
                                {
                                    returnMedia(pMed,pAcct,command);
                                } 
                            }else if(filmType == 'D')//drama
                            {
                                string director;
                                getline(iss, director, ',');//read until delimiter
                                director = trimLeadingAndTrailingSpaces(director);

                                string title;
                                getline(iss, title, ',');//read until delimiter
                                title = trimLeadingAndTrailingSpaces(title);

                                //create a stub object
                                Drama d('M', storageType, 0, filmType, director, title, 0);
                                Media* pMed = invMgr->getMedia(d);
                                if(pMed != nullptr)
                                {
                                    returnMedia(pMed,pAcct,command);
                                } 
                            }else
                            {
                                cout << "Wrong Film Type" << endl;
                            }
                        }
                    }
                    else{
                        cout << "Wrong Storage Type" << endl;
                        break;
                    }
                }else{
                    cout << "Error command" << endl;
                }
                break;
            }
        }
    }
}

bool TransactionMgr::borrowMedia(Media* med, Account* acct, const char actionType)
{
    if(med->getNumStock() > 0)
    {
        Transaction* trans = new Transaction(acct, med, actionType);
        if(invMgr->decInv(*med))
        {      
            transactions.addFront(acct->getAccountId(), trans);
        }
    }else
    {
        return false;//no stock
    }
    return true;
}

bool TransactionMgr::returnMedia(Media* med, Account* acct, const char actionType)
{
    if(med->getNumStock() < med->getMaxStock())
    {
        Transaction* trans = new Transaction(acct, med, actionType);
        transactions.addFront(acct->getAccountId(), trans);
        invMgr->incInv(*med);
    }else{
        cout << "Stock will be higher than max stock" << endl;
        return false;
    }

    return true;
}

void TransactionMgr::printAccountHistory(const int acctId)
{
    Account* pAcct = acctMgr->getAccount(acctId);
    if(pAcct != nullptr)
    {
        cout << endl;

        //print customer header
        cout << "------------------------AccountId: " << pAcct->getAccountId() << " ";
        cout << pAcct->getFirstName() << " ";
        cout << pAcct->getLastName() << "------------------------" << endl;

        HashNode<int, Transaction*>* node = transactions.get(acctId);//find head node
        //print each transaction from the newest to the oldest
        while(node != nullptr && node->getKey() == acctId)
        {
            if(node->getValue()->getMedia()->getMediaType() == 'F')//film
            {
                Film* film = dynamic_cast<Film*>(node->getValue()->getMedia());
                if(film->getFilmType() == 'F')//funny
                {
                    cout << fixed << setw(7) << setw(7) << setw(25) << 
                    setw(15) << setw(6) << setw(3) << setw(5);

                    Comedy* pComedy = dynamic_cast<Comedy*>(film);
                    if(pComedy != nullptr)
                    {
                        if(pComedy->getStorageType() == 'D')//DVD
                            cout << "DVD";
                        
                        if(node->getValue()->getActionType() == 'B')//borrow
                            cout << setw(7) << "Borrow";
                        else if(node->getValue()->getActionType() == 'R')//return
                            cout << setw(7) << "Return";

                        string title = film->getTitle();
                        title.resize(23);
                        cout << setw(25) << title;
                        cout << setw(15) << pComedy->getDirector();
                        cout << setw(6) << film->getYear();
                        cout << setw(3);
                        cout << setw(5) << endl;
                    }
                }else if(film->getFilmType() == 'C')
                {
                    cout << fixed << setw(7) << setw(7) << setw(25) <<
                    setw(15) << setw(6) << setw(3) << setw(5);

                    Classic* pClassic = dynamic_cast<Classic*>(film);
                    if(pClassic != nullptr)
                    {
                        if(pClassic->getStorageType() == 'D')//DVD
                            cout << "DVD";
                        
                        if(node->getValue()->getActionType() == 'B')//borrow
                            cout << setw(7) << "Borrow";
                        else if(node->getValue()->getActionType() == 'R')//return
                            cout << setw(7) << "Return";

                        string title = film->getTitle();
                        title.resize(23);
                        cout << setw(25) << title;
                        cout << setw(15) << pClassic->getDirector();
                        cout << setw(6) << film->getYear();
                        cout << setw(3) << pClassic->getMonth();
                        cout << setw(5) << pClassic->getMainActorFirst() << " " << pClassic->getMainActorLast() << endl;
                    }
                }else if(film->getFilmType() == 'D')
                {
                    cout << fixed << setw(7) << setw(7) << setw(25) <<
                    setw(15) << setw(6) << setw(3) << setw(5);

                    Drama* pDrama = dynamic_cast<Drama*>(film);
                    if(pDrama != nullptr)
                    {
                        if(pDrama->getStorageType() == 'D')//DVD
                            cout << "DVD";
                        
                        if(node->getValue()->getActionType() == 'B')//borrow
                            cout << setw(7) << "Borrow";
                        else if(node->getValue()->getActionType() == 'R')//return
                            cout << setw(7) << "Return";

                        string title = film->getTitle();
                        title.resize(23);
                        cout << setw(25) << title;
                        cout << setw(15) << pDrama->getDirector();
                        cout << setw(6) << film->getYear();
                        cout << setw(3);
                        cout << setw(5) << endl;
                    }
                }
            }
            node = node->getNext();
        }
    }
}

void TransactionMgr::printInventory() const
{

}

string TransactionMgr::trimLeadingAndTrailingSpaces(string str)
{
    //remove leading spaces
    string newString1;
    string::iterator it;
    bool charStarted = false;
    for(it = str.begin(); it != str.end(); it++) 
    {
        if(*it != ' ')
            charStarted = true;

        if(charStarted)
            newString1.insert(newString1.end(), *it);
    }

    //remove trailing spaces
    string newString2;
    string::reverse_iterator rit;
    charStarted = false;
    for(rit = newString1.rbegin(); rit != newString1.rend(); rit++) 
    {
        if(*rit != ' ')
            charStarted = true;

        if(charStarted)
            newString2.insert(newString2.begin(), *rit);
    }

    return newString2;
}