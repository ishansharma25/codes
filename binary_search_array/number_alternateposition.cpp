#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void alternateNumbers(vector<int>&a) 
{
    vector<int> v(a.size(),0);
    int j_p=0;
    int j_n=1;
    for(int i=0;i<a.size();i++)
    {
        cout<<"asdas";
        if(a[i]>0)
        {
            v[j_p]=a[i];
          j_p=j_p+2;
          
        }
        else
        {
              v[j_n]=a[i];
          j_n=j_n+2;
        }
    }

    cout<<"\n";
    cout<<"\n";
      for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
   /* for(int i=0;i<v.size();i++)
    {
        a.push_back(v[i]);
    }
    cout<<"\n";
      for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }*/
   
}
int main() 
{
    int n;
    vector<int> a = {1,2,-4,-5};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
   
 alternateNumbers(a);
    
    return 0;
}