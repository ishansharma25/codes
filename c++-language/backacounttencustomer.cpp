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

public:void output()
{
    cout<<"Name Of customer:"<<name<<"\n";
    cout<<"Account Number Of customer:"<<accno<<"\n";
    cout<<"Account type Of customer:"<<type<<"\n";
}
public:void deposite()
{
    cout<<"Enter amount to be deposited:";
    cin>>balance;
    cout<<"Account:"<<balance;
}
public:void withdraw()
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
    cout<<"Account:"<<balance;
}
};
int main()
{
    float bal;
    int n;
    bank b1[10];
    cout<<"Enter number customer:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    b1[i].input();
    b1[i].deposite();
    b1[i].withdraw();
    b1[i].output();
    }

}