#include<iostream>
#include<conio.h>
using namespace std;
const int m=50;
class shop
{
    private:int itemcode[m];
    private:float itemprize[m];
    private:int count;
    public:void getiteam();
    public:void displayiteam();
    public:void displaysum();
    public:void revome();
    public:void countiteam()
    {
        count=0;
    }

};
void shop::getiteam()
{
    cout<<"Enter Iteam code:";
    cin>>itemcode[count];
    cout<<"Enter Iteam Prize:";
    cin>>itemprize[count];
    count++;
}
void shop::displayiteam()
{
   
        cout.width(5);
        cout<<"S.No";
        cout.width(15);
        cout<<"Item prize";
        cout.width(20);
        cout<<"Item Code\n";
        for(int i=0;i<count;i++)
        {
            cout.width(5);
            cout<<i;
            cout.width(15);
            cout<<itemprize[i];
            cout.width(20);
            cout<<itemcode[i]<<"\n";
        }
}
void shop::displaysum()
{
    float sum=0.0;
    for (int i = 0; i < count; i++)
    {
        sum=sum+itemprize[i];
        /* code */
    }
    cout<<"Sum of prize:"<<sum;
}
void shop::revome()
{
    int n;
    cout<<"Enter iteam code to be removed:";
    cin>>n;
    for (int i = 0; i < count; i++)
    {
        if(n==itemcode[i])
        {
            itemprize[i]=0;
        }
        /* code */
    }
    
}
int main()
{
    int n;
    shop b;
    b.countiteam();
    do
    {
        cout<<"\n"<<"1:get iteam\n"
        <<"2:display iteam\n"
        <<"3:Sum iteam prize\n"
        <<"4:remove iteam\n"
        <<"5:To exit\n"
        <<"\nEnter your choice:";
        cin>>n;
        if(n==1)
        {
            b.getiteam();
        }
        if(n==2)
        {
            b.displayiteam();
        }
        if(n==3)
        {
            b.displaysum();
        }
        if(n==4)
        {
            b.revome();
        }
    } while (n!=5);
    
    return 0;
}
