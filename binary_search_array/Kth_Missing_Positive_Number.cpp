#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

/*-----------------------------brute force---------------------------
int missingK(vector < int > a, int n, int k) {
  
   int max_n=*max_element(a.begin(),a.end());
   vector<int> ans;
      int j=0;
   for(int i=1;i<=max_n;i++)
   {
        if(i==a[j]&&j<n)
        {
           j++;  //1,3,6
        }
        else{
           ans.push_back(i);
        }
   }
        if (ans.empty()||ans.size()<k) 
      {
         return max_n+(k - ans.size());
        }
        else 
        {
         return ans[k - 1];
        }
  
}*/

/*---------------------------------------no extra space-----------------------------
int missingK(vector < int > a, int n, int k) {
  
   int max_n=*max_element(a.begin(),a.end());
      int j=0;
      int i;
   for( i=1;i<=max_n;i++)
   {
        if(i==a[j]&&j<n)
        {
           j++;  //1,3,6
        }
        else{
          k--;
          if (k == 0) {
            return i;
          }
        }
   }

        return max_n + k;
   
}*/

int missingK(vector < int > a, int n, int k)
{
    
   int  low=0;
   int  high=n-1;
    int j=0;
    int ans_miss;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        ans_miss=a[mid]-(mid+1);
        if(k<=ans_miss)
        {
            high=mid-1;
        }
        else if(k>ans_miss)
        {
            low=mid+1;
        }
    }   
    return low+k; 
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6, 7,8, 9, 10};
    int n;
    int k = 3;
    n=vec.size();
    int ans = missingK(vec, n, k);
    cout << "The missing number is: " << ans << "\n";
   // return 0;
}