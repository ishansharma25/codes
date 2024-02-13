#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void merge(vector<int>&a,vector<int>&b,int n,int m) 
{
    int left=n-1;
    int right=0;
    while(left>=0&&right<m)
    {
        if(a[left]>b[right])
        {
            swap(a[left],b[right]);
           right++;
           left--;
        }
        else{
            break;
        }
        
    }
    sort(a.begin(),a.end());
     sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
int main() 
{
    vector<int> arr1 = {1, 4, 8, 10};
   vector<int>arr2 = {2, 3, 9};
    int n = 4;
    int m = 3;
    merge(arr1, arr2, n, m);
}