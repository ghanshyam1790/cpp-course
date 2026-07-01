//PROGRAM FOR CHECKING WITHDRAWAL IS ALLOWED OR NOT
#include<iostream>
using namespace std;

int main()
{
    int pin;
    int balance;
    cout<<"Enter ur atm pin-";
    cin>>pin;
        if (pin==1234)
        {cout<<"Enter the balance in ur bank account-";
        cin>>balance;
            if (balance>=1000)
            {
            cout<<"Withdrawal is allowed";
            }
            else if(balance>=0 && balance<1000)
            {
            cout<<"Insufficient Balance";
            }
            else
            {cout<<"Input value can't exist";}
        }
        else
        {cout<<"You entered the wrong pin";}
    

return 0;
}
