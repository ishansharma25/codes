#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
         unordered_map<int,int> mpp;
         int i,j;
        int max=0;
        int max_ele=0;
         for(i=0;i<nums.size();i++)
         {
            mpp[nums[i]]++;
         }
         for(auto m:mpp)
         {
            if(m.second>max)
            {
                max=m.second;
                max_ele=m.first;
            }
            
         }
         return max_ele;

    }
};
int main()
{
    /*map is in for of key and valuve form*/
    vector<int> a={3,2,3};
    Solution s;
    int p=s.majorityElement(a);
    cout<<p;
   

}