
#include <bits/stdc++.h>
using namespace std;
#include<vector>

/*int findPages(vector<int>& arr, int n, int m) {
   int low=*max_element(arr.begin(),arr.end());
   int high=accumulate(arr.begin(),arr.end(),0);
      if (m > n) return -1;
   for(int i= low;i<=high;i++)
   {

   int count_student=1;
     
    long long total=0;
      for(int j=0;j<n;j++)
      {
         
         if(total+arr[j]<=i)
         {
            
            total+=arr[j];

         }
         else
         {
            
            count_student++;
             total=arr[j];

         }

      }
      if(count_student==m)
      {
         return i;
      }
    
   }
     
   return low;
}*/

int findPages(vector<int> &arr, int n, int m) 
{
       if (m > n) return -1;
  int low = *max_element(arr.begin(), arr.end());
  int high = accumulate(arr.begin(), arr.end(), 0);
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int count_student=1;
     
    long long total=0;
      for(int j=0;j<n;j++)
      {
         
         if(total+arr[j]<=mid)
         {
            
            total+=arr[j];

         }
         else
         {
            
            count_student++;
             total=arr[j];

         }

      }
  
 if(count_student>m)
       {
           low=mid+1;
 } else {
           high = mid - 1;
 }
  }
  return low;
}
int main()
{
    vector<int> a= {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(a, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}


