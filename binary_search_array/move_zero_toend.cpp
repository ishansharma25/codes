#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 vector<int> move_zero(vector<int> nums)
{
    int n=nums.size();
   int i,j;
   j=-1;
   for(int i=0;i<n;i++)
   {
    if(nums[i]==0)
    {
        j=i;
        break;
    }
   }
  
   for (int i = j+1; i < n; i++)
   {
    if(nums[i]!=0)
    {
        swap(nums[i],nums[j]);
        j++;
    }
   }
   return nums;
   
   
}

int main() {
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5,1};


    vector<int> n= move_zero(nums);

      for (int i=0;i<n.size();i++)
        {
            cout<<n[i]<<" ";
        }

  

    return 0;
}