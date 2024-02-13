

#include <bits/stdc++.h>
#include <climits>
#include<vector>
using namespace std;

/*--------------------------------brute force------------------------------
int minimumRateToEatBananas(vector<int> v, int h) {

 int n=v.size();
 
    int max_n=INT_MIN;
       for (int i = 0; i < n; i++) {
        max_n = max(max_n, v[i]);
    }
   
  
    for(int i=1;i<=max_n;i++)
    {
        int count=0;
        
        for(int j=0;j<n;j++)
        {
            count+=ceil((double)(v[j]) / (double)(i));
            
        }
        
        if (count<=h)
            {
                return i;
            }

    }
    return -1;
}*/


int minimumRateToEatBananas(vector<int> v, int h)
{
  
    int n=v.size();
    int max_n=INT_MIN;
 
   for(int i=0;i<n;i++)
   {
       if(max_n<v[i])
       {
           max_n=v[i];
       }
   }
   
  int  low=1;
   int high=max_n;

   while(low<=high)
   {
       int mid=low+(high-low)/2;
        double count=0;
       for(int i=0;i<n;i++)
       {
           count+=ceil((double)v[i]/(double)mid);
       }
      

       if(count<=h)
       {
            high=mid-1;
          
       }
      
       else
       {
            low=mid+1;
       }
        

   }
   return low;
}
int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}