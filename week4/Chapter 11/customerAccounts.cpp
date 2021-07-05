#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;
struct Account{
    string userName;
    string address;
    string city;
    string state;
    string zip;
    string telephoneNum;
    double balance;
    string dateOfLastPayment;
};
void showMainMenu(const unsigned);
void showModifyMenu();
void addAccount(Account[],const unsigned,unsigned&);
void modifyAccount(Account[],const unsigned);
void displayAccounts(Account[],const unsigned);
void setName(Account&);
void setAddress(Account&);
void setCity(Account&);
void setState(Account&);
void setZIP(Account&);
void setTelephone(Account&);
void setBalance(Account&);
void setDateOfLastPayment(Account&);
string getOrdinal(const unsigned);
bool isEmpty(const string);
int main(){
    const unsigned MAX = 10;
    Account customers[MAX];
    unsigned firstAvailableIndex=0;
    int choice = 0;
    do{
        showMainMenu(firstAvailableIndex);
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();
        cout<<"============================================\n";
        if(choice == 1)
            addAccount(customers,MAX,firstAvailableIndex);
        else if(choice == 2)
            modifyAccount(customers,firstAvailableIndex);
        else if(choice == 3)
            displayAccounts(customers,firstAvailableIndex);
        else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
            cout<<"============================================\n";
        }
    }while(choice != 0);
    return 0;
}
void showMainMenu(const unsigned numCustomers){
    cout<<"[1] Add new account.\n";
    cout<<"[2] Modify existing account.\n";
    cout<<"[3] Display all data stored.\n";
    cout<<"[0] Exit.\n";
    cout<<"--------------------------------------------\n";
    cout<<"[ Current number of accounts : "<<numCustomers<<" ]";
    cout<<endl;
}
void showModifyMenu(){
    cout<<"[1] Modify the account user name.\n";
    cout<<"[2] Modify the account address.\n";
    cout<<"[3] Modify the account city.\n";
    cout<<"[4] Modify the account state.\n";
    cout<<"[5] Modify the account ZIP code.\n";
    cout<<"[6] Modify the account telephone number.\n";
    cout<<"[7] Modify the account balance.\n";
    cout<<"[8] Modify the date of last payment.\n";
    cout<<"[0] Exit.\n";
    cout<<"--------------------------------------------\n";
}
void addAccount(Account customers[],const unsigned SIZE,
                unsigned& index){
    if(index >= SIZE){
        cout<<"Sorry, but we can't add any further\n";
        cout<<"accounts because the array is full.\n";
        cout<<"[ Current number of accounts : "<<index<<" ]\n";
        cout<<"============================================\n";
        return;
    }
    cout<<"The information about "<<(index+1)
        <<getOrdinal(index+1)<<" account,\n";
    setAddress(customers[index]);
    setCity(customers[index]);
    setState(customers[index]);
    setZIP(customers[index]);
    setTelephone(customers[index]);
    setBalance(customers[index]);
    setDateOfLastPayment(customers[index]);
    index++;
    cout<<"Account number ["<<index<<"] was successfully"
        <<" stored\n";
    cout<<"============================================\n";
}
void modifyAccount(Account customers[],
                   const unsigned NUM_ACCOUNTS){
    if(NUM_ACCOUNTS == 0){
        cout<<"Sorry, but we can't modify any account\n";
        cout<<"because the array is empty.\n";
        cout<<"[ Current number of accounts : "
            <<NUM_ACCOUNTS<<" ]\n";
        cout<<"============================================\n";
        return;
    }
    int account = -1;
    int choice = 0;
    cout<<"Please enter the account number, you want to\n";
    cout<<"modify, for example 1 for the 1st account,\n";
    cout<<"... , up to 10 for the 10th account if\n";
    cout<<"available.\n";
    cout<<"Note 0 or any negative numbers are\n";
    cout<<"not allowed.\n";
    cout<<"--------------------------------------------\n";
    cout<<"[ Current number of accounts : "<<NUM_ACCOUNTS<<" ]";
    cout<<endl;
    cout<<"Your Account : ";
    cin>>account;
    while(account<1 || account>NUM_ACCOUNTS){
        cout<<"Note we do not accept be 0 or negative\n";
        cout<<"     numbers, and also the account number\n";
        cout<<"     can't exceed the number of accounts\n";
        cout<<"     so press 1 for the first account for\n";
        cout<<"     example.\n";
        cout<<"--------------------------------------------\n";
        cout<<"[ Current number of accounts : "<<NUM_ACCOUNTS
            <<" ]\n";
        cout<<"Your Choice : ";
        cin>>account;
    }
    cout<<"--------------------------------------------\n";
    cout<<"Please choose your option,\n\n";
    account--;
    do{
        showModifyMenu();
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();
        if(choice == 1){
            cout<<"You chose the user name of the\n";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].userName
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setName(customers[account]);
        }else if(choice == 2){
            cout<<"You chose the address of the";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].address
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setAddress(customers[account]);
        }else if(choice == 3){
            cout<<"You chose the city of the";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].city
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setCity(customers[account]);
        }else if(choice == 4){
            cout<<"You chose the state of the";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].state
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setState(customers[account]);
        }else if(choice == 5){
            cout<<"You ch the ZIP code of the";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account\n";
            cout<<"Old Value : "<<customers[account].zip
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setZIP(customers[account]);
        }else if(choice == 6){
            cout<<"You chose the telephone number of the\n";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].telephoneNum
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setTelephone(customers[account]);
        }else if(choice == 7){
            cout<<"You chose the balance of the";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].balance
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setBalance(customers[account]);
        }else if(choice == 8){
            cout<<"You chose the date of last payment of the\n";
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "
                <<customers[account].dateOfLastPayment<<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            setDateOfLastPayment(customers[account]);
        }else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
        }
    }while(choice != 0);
    cout<<"You would exit the modification mode.\n";
    cout<<"============================================\n";
}
void displayAccounts(Account customers[],
                   const unsigned NUM_ACCOUNTS){
    if(NUM_ACCOUNTS == 0){
        cout<<"Sorry, but the array is empty.\n";
        cout<<"[ Current number of accounts : "
            <<NUM_ACCOUNTS<<" ]\n";
        cout<<"============================================\n";
        return;
    }
    for(unsigned i=0; i<NUM_ACCOUNTS;i++){
        cout<<"The information about "<<(i+1)
        <<getOrdinal(i+1)<<" account,\n";
        cout<<"User Name : "<<customers[i].userName<<endl;
        cout<<"  Address : "<<customers[i].address<<endl;
        cout<<"     City : "<<customers[i].city<<endl;
        cout<<"    State : "<<customers[i].state<<endl;
        cout<<" ZIP Code : "<<customers[i].zip<<endl;
        cout<<"Telephone : "<<customers[i].telephoneNum<<endl;
        cout<<"  Balance : "<<customers[i].balance<<endl;
        cout<<"Date of last Payment : "
            <<customers[i].dateOfLastPayment<<endl;
        if(i<(NUM_ACCOUNTS-1))
            cout<<"--------------------------------------------\n";
    }
    cout<<"============================================\n";
}
void setName(Account& account){
    cout<<"User Name : ";
    getline(cin,account.userName);
    while(isEmpty(account.userName)){
        cout<<"Sorry but the name can't be empty,\n";
        cout<<"User Name : ";
        getline(cin,account.userName);
    }
}
void setAddress(Account& account){
    cout<<"  Address : ";
    getline(cin,account.address);
    while(isEmpty(account.address)){
        cout<<"Sorry but the address can't be empty,\n";
        cout<<"  Address : ";
        getline(cin,account.address);
    }
}
void setCity(Account& account){
    cout<<"     City : ";
    getline(cin,account.city);
    while(isEmpty(account.city)){
        cout<<"Sorry but the city can't be empty,\n";
        cout<<"     City : ";
        getline(cin,account.city);
    }
}
void setState(Account& account){
    cout<<"    State : ";
    getline(cin,account.state);
    while(isEmpty(account.state)){
        cout<<"Sorry but the state can't be empty,\n";
        cout<<"    State : ";
        getline(cin,account.state);
    }
}
void setZIP(Account& account){
    cout<<" ZIP Code : ";
    getline(cin,account.zip);
    while(isEmpty(account.zip)){
        cout<<"Sorry but the ZIP code can't be empty,\n";
        cout<<" ZIP Code : ";
        getline(cin,account.zip);
    }
}
void setTelephone(Account& account){
    cout<<"Telephone : ";
    getline(cin,account.telephoneNum);
    while(isEmpty(account.telephoneNum)){
        cout<<"Sorry but the telephone can't be empty,\n";
        cout<<"Telephone : ";
        getline(cin,account.telephoneNum);
    }
}
void setBalance(Account& account){
    cout<<"  Balance : ";
    cin>>account.balance;
    while(account.balance < 0){
        cout<<"Sorry but the balance can't be negative,\n";
        cout<<"  Balance : ";
        cin>>account.balance;
    }
    cin.ignore();
}
void setDateOfLastPayment(Account& account){
    cout<<"Date of last Payment : ";
    getline(cin,account.dateOfLastPayment);
    while(isEmpty(account.dateOfLastPayment)){
        cout<<"Sorry but the date can't be empty,\n";
        cout<<"Date of last Payment : ";
        getline(cin,account.dateOfLastPayment);
    }
}
bool isEmpty(const string str){
    if(str.empty())
        return true;
    unsigned len = str.length();
    for(unsigned i=0;i<len;i++){
        if( !isspace(str[i]) )
            return false;
    }
    return true;
}
string getOrdinal(const unsigned num){
    unsigned parser = num%100;
    if(parser < 20 && parser > 10){
        return "th";
    }
    parser = num%10;
    if(parser == 1){
        return "st";
    }else if(parser == 2){
        return "nd";
    }else if(parser == 3){
        return "rd";
    }else {
        return "th";
    }
}
