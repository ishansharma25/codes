#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
   vector<int> v;
   
   int n=a.size();
   int temp=a[n-1];
   v.push_back(a[n-1]);

   for(int i=n-2;i>=0;i--)
   {
       if(a[i]>temp)
       {
           v.push_back(a[i]);
           temp=a[i];
       }
   }
   
    return v;
}
int main() 
{
    int n;
    vector<int> a = {1,2,3,2};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
   
vector<int> c=superiorElements(a);
for(int i=0;i<c.size();i++)
{
    cout<<c[i];
}
    
    return 0;
}