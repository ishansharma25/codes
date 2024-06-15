#include<bits/stdc++.h>
using namespace std;
class dpfib
{
    public:int fib(int n,int dp[])
    {
        if(n<=1)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        else
        {
            return(dp[n]=fib(n-1,dp)+fib(n-2,dp));
        }
    }
};
int main()
{
    dpfib f;
    int n=5,p;
    //vector<int> dp[n+1,-1];
    int dp[n+1];
    for (int i = 0; i <= n; i++) {
        dp[i] = -1;
    }
   p=f.fib(n,dp);
    cout<<p;
    return 0;
    
}


/*int main()
{
    int n,i;
    n=7;
    int pre,pre2,current;
    pre=1;
    pre2=0;
    for(i=2;i<n;i++)
    {
        current=pre2+pre;
        pre2=pre;
        pre=current;
    }
    cout<<pre;
    return 0;
}*/