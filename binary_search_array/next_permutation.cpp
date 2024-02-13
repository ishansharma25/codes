#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void next_permutation(vector<int> &a)
{
    int n=a.size();
    int ind=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        ind=i;
    }
    for(int i=n-1;i>=ind;i--)
    {
        if(a[i]>a[ind])
        {
            swap(a[i],a[ind]);
            break;
            
        }
    }
    reverse(a.begin()+ind+1,a.end());
    
      for(int i=0;i<7;i++)
    {
        cout<<a[i];
    }
    
}
int main()
{
    vector<int> a;
    for(int i=0;i<7;i++)
    {
        int element;
        cin>>element;
        a.push_back(element);
        }

next_permutation(a);
}