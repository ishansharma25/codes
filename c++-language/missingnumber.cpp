#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n,p=-1;
        int i;
        n=nums.size();
        int temp[n+1];
        for(int i=0;i<=n;i++)
        {
            temp[i]=-1;
        }
         for(int i=0;i<n;i++)
        {
           temp[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
          // cout<<temp[i]<<"\n";
        }
        for(i=0;i<n;i++)
        {
            if(temp[i]==-1)
            //p=i;
            break;
        }
        return i;
    }
};
int main()
{
    vector<int> nums{1,2,0};
    int p;
    Solution s;
    p=s.missingNumber(nums);
    cout<<p;
    

}