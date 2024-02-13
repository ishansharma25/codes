#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
/* -------------------------brute force-------------
int longest_subarray(vector<int> a,int k) 
{
    int len=0;
    int n=a.size();
   for(int i=0;i<n;i++)
   {
    int s=0;
    for (int i = 0; i <n; i++)
    {
        s=s+a[i];
        if(s==k)
        {
            len=max(len,s);
        }
    }
    
   }
   return len;
}*/


/* -------------------------better approach-------------o(n)oro(nlogn)*/
int longest_subarray(vector<int> a,int k) 
{
    
    int n=a.size();
    int sum=0;
    int max_len=0;
    map<int,int> mp;
   for(int i=0;i<n;i++)
   {
    sum=sum+a[i];
      
    if(sum==k)
    {
        max_len=max(max_len,i+1);
    }
    int rem=sum-k;

    if(mp.find(rem)!=mp.end())
    {
       int len=i-mp[rem];
       max_len=max(max_len,len);
    }
     if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
     }
   }
    return max_len;
   }

   
/*
int longest_subarray(vector<int> a,int k) //o(2n)
{
    
    int n=a.size();
    int sum=a[0];
    int max_len=0;
    int j=0;
    int i=0;
    while (i<n)
    {
      
       while(sum>k&&j<=i)
       {
        sum=sum-a[j];
        j++;
       }
       if(sum==k)
       {
        max_len=max(max_len,i-j+1);
       }
          i++;
          
        if(i<n)
        {
            
       sum=sum+a[i];
        }

    }
    
   
   return max_len;
}*/
int main() 
{
    vector<int> a = {1,2,3,1,1,1,1};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
    int number = longest_subarray(a,3);
    cout<<number;

    return 0;
}