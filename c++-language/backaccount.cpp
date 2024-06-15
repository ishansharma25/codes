#include <stdlib.h>
#include<iostream>
using namespace std;
#include<conio.h>
class bank
{
    char name[20];
    long int accno;
    char type[20];
    float balance;

public:void input()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter account number:";
        cin>>accno;
        cout<<"Enter account type:";
        cin>>type;

    }

public:void output(int balance)
{
    cout<<"Name Of customer:"<<name<<"\n";
    cout<<"Account Number Of customer:"<<accno<<"\n";
    cout<<"Account type Of customer:"<<type<<"\n";
    cout<<"Account"<<balance;
}
public:int deposite()
{
    cout<<"Enter amount to be deposited:";
    cin>>balance;
    return(balance);
}
public:int withdraw(int balance)
{
    float a;
    cout<<"Enter amount to be taken out:";
    cin>>a;
    if(a==0)
    {
        cout<<"Soory you are broke";
    }
    else if(a<balance)
    {
        balance=balance-a;
    }
    return(balance);
}
};
int main()
{
    float bal;
    bank b1;
    b1.input();
    bal=b1.deposite();
    bal=b1.withdraw(bal);
    b1.output(bal);

}