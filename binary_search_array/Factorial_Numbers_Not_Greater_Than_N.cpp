#include<iostream>
#include<vector>
using namespace std;

int factorial(int n)
{
   if (n == 0 || n == 1)
    {
        return 1;
    }
    return factorial(n-1)*n;
}

vector<int> factorialnumber(int n)
{
     if(n==0)
    {
        return {};
    }

     vector<int> r=factorialnumber(n-1);
     r.push_back(factorial(n));
     return r;
     
}

int main()
{
    int n=7;
 
vector<int> r=factorialnumber(n);
  for(int i=0;i<r.size();i++)
  {
    if(r[i]<n)
    cout<<r[i]<<" ";
  }
}
