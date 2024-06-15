#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool isHappy(int n)
    {
        int i,r=0,d;  
        while(n>0)
        {
            do
            {
            
             
            d=n%10;
            r=r+d*d;
            n=n/10;
            }
            while (r!=1);
        }
        return r==1;
    }
};
int main()
{
    int a;
    a=19;
    solution b;
    int p=b.isHappy(a);
    cout<<p;
}