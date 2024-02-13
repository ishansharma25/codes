#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int  most_one( vector<int>& nums) {
        
        int n=nums.size();
      int max_c=0;
      int count=0;
      for (int i = 0; i < n; i++)
      {
        if(nums[i]==1)
        {
            count++;
            max_c=max(count,max_c);
        }
        else if(nums[i]==0)
        {
           
            count=0;
        }
      }
      return max_c;
    }
};

int main() {
    vector<int> nums = {1,1,0,1,1,1};

  Solution s;
    int  frequencyMap = s.most_one(nums);
      cout<<frequencyMap;
  

    return 0;
}