#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int c=0,n,m=0;
        n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
            m=nums[i];
            c=1;
            }
            if(m==nums[i])
            c++;
            else
            c--;
            }
        
        
        return m;
    }
};
int main()
{
    vector<int> nums{3,2,3};
    Solution s;
    int p=s.majorityElement(nums);
    cout<<p;
    

}