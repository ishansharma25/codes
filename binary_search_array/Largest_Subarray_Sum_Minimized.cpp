
#include <bits/stdc++.h>
using namespace std;
#include<vector>

/*int largestSubarraySumMinimized(vector<int> a, int k) {
   
   int n=a.size();
   int low=*max_element(a.begin(),a.end());
   int high=accumulate(a.begin(),a.end(),0);
   for(int i=low;i<=high;i++)
   {
       int p=1;
       int sum=0;
       for(int j=0;j<n;j++)
       {
           if(sum+a[j]<=i)
           {
               sum+=a[j];
           }
           else{
               p++;
               sum=a[j];
           }
       }
       if(p==k)
       {
           return i;
       }
   }
}*/
int largestSubarraySumMinimized(vector<int> a, int k) {
   
   int n=a.size();
   int low=*max_element(a.begin(),a.end());
   int high=accumulate(a.begin(),a.end(),0);
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    int p=1;
    int sum=0;
     for(int j=0;j<n;j++)
       {
           if(sum+a[j]<=mid)
           {
               sum+=a[j];
           }
           else{
               p++;
               sum=a[j];
           }
       }
       if(p>k)
       {
           low=mid+1;
       }
       else{
           high=mid-1;
       }
    
  }
  return low;
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    int ans = largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}