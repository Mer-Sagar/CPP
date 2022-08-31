/*6. Create a class for Bank account with the following data members.

(1) Name of depositor
(2) Account number
(3) Type of account
(4) Balance member functions
a. To assign initial values
b. To deposit an amount in a particular account
c. To withdraw an amount after checking the balance
d. To display name and balance

WAP to manage at least 10 customers who can deal with deposit and withdraw
amount and calculate the current balance.*/

#include<iostream>
#include<cstring>
using namespace std;

class Account
{
    //data members
    static int totAccount;
    char name[20];
    int account_no;
    char account_type[20];
    float bal=0;

    public:
    Account()
    {
        account_no = 1000 + totAccount;
        totAccount++;
        bal=0;
    }
    
    //member function
    void deposit();
    void withdraw();
    void show_bal();
    void addAccount();

};

int Account::totAccount=0;

void Account::addAccount()
{
        int choice=0;
        cout<<"Enter your name: ";
        cin>>name;

        while(choice != 1 && choice != 2)
        {
            cout<<"Please choose your Account Types"<<endl;
            cout<<"1: Saving Account"<<endl;
            cout<<"2: Current Account"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            
            switch(choice)
            {
                case 1: strcpy(account_type, "Saving Account");
                    break;
                case 2: strcpy(account_type, "Current Account");
                    break;
                default: cout<<"Please enter a valid choice"<<endl;
                    break;                        
            }

        }
            cout<<"\n\nFinal details:"<<endl;
            cout<<"Account Number: "<<account_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Account Type: "<<account_type<<endl;
            cout<<"Your initial balance is 0.Please deposit into your account\n\n";
        
}

void Account::deposit()
{
    int cash=0;
    cout<<"Enter the amount: ";
    cin>>cash;
    bal = bal + cash;
    cout<<"The balance has been updated"<<endl;
}

void Account::withdraw()
{
    int cash=0;
    cout<<"Enter the amount: ";
    cin>>cash;
    if(bal==0 || cash>bal)
    {
        cout<<"You don't have sufficient balance to withdraw the given amount"<<endl;
        return;
    }
    bal = bal - cash;
    cout<<"Your current balance is: "<<bal<<endl;
}

void Account::show_bal()
{
    cout<<"Account_no: "<< account_no << endl;
    cout<<"Name: "<< name << endl;
    cout<<"Total Balance: " << bal<<endl;
}

int check_account_no()
{
    int account_no;
    cout<<"Enter your account number: ";
    cin>>account_no;
    int j = account_no % 1000;
    if(j>10 || j<0 || account_no > 1011 || account_no < 1000 )
    {
        cout<<"Invalid Account Number"<<endl;
        return -1;
    }
    return j;
}

int main()
{
    int i=0;
    Account account[5];
    int accno, j;
    int op;
    while(op!=5)
    {
        cout<<"\n1: Add a new Account"<<endl;
        cout<<"2: Deposit"<<endl;
        cout<<"3: Withdraw"<<endl;
        cout<<"4: Show details"<<endl;
        cout<<"5: Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>op;
        switch(op)
        {
            case 1:
                    if(i==5)
                    {
                        cout<<"Users are exceeded"<<endl;
                        break;
                    }
                    account[i++].addAccount();
                    break;
            
            case 2:
                    j = check_account_no();
                    if(j==-1)
                    {
                        break;
                    }
                    account[j].deposit();
                    break;
            
            case 3: 
                    j = check_account_no();
                    if(j==-1)
                    {
                        break;
                    }
                    account[j].withdraw();
                    break;
            
            case 4:
                    j = check_account_no();
                    if(j==-1)
                    {
                        break;
                    }
                    account[j].show_bal();
                    break;
            
            case 5: cout<<"Exiting!!!"<<endl;
                    break;
            
            default: cout<<"Please enter a valid choice";
                    break;
        }
    }
    return 0;
}
