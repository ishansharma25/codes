
#include <bits/stdc++.h>
using namespace std;

/*--------------------------------brute force------------------------------
int leastWeightCapacity(vector<int> &weights, int d)
 {
     
    int n = weights.size();
  int maxi = *max_element(weights.begin(), weights.end());
  int sum = accumulate(weights.begin(), weights.end(), 0);
  for(int i=maxi;i<=sum;i++)
  {
     
       int days = 1; 
        int load = 0;
      for(int j=0;j<n;j++)
      {
        if (load + weights[j] > i)
         {
          days += 1;
          load = weights[j];
        }
        else{
            load+=weights[j];
        }
      }
      if(days<=d)
      {
          return i;
      }
  }
  return -1;
}*/

int leastWeightCapacity(vector<int> &weights, int d) 
{
    
    int n = weights.size();
  int maxi = *max_element(weights.begin(), weights.end());
  int sum = accumulate(weights.begin(), weights.end(), 0);
  int low=maxi;
  int high=sum;
  while(low<=high)
  {
    int mid=low+(high-low)/2;
     int days = 1; 
        int load = 0;
        for(int i=0;i<n;i++)
        {
          if(load+weights[i]>mid)
          {
            days++;
            load=weights[i];
          }
          else
          {
            load+=weights[i];
          }
        }
        if(days>d)
        {
          low=mid+1;
        }
        else if(days<=d)
        {
         high=mid-1;
        }

  }
  return  low;

}

int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}