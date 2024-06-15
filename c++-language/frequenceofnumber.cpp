#include<bits/stdc++.h>
using namespace std;
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       
        int count=0;
        int element=0;
        int count_max=0;
         for (int i = 0; i < n; i++)
          {
            count=0;
            for (int j = 0; j < n; j++)
            {
                if(nums[i]==nums[j])
                count++;
            }
            if(count>count_max)
        {
            element=nums[i];
            count=count_max;
        }

        }
        return element;
        
        

    }
};

int main()
{
    //vector<int> a={2,2,1,1,1,2,2};
    vector<int> a={3,2,3};
    Solution f;
    int p;
    p=f. majorityElement(a);
    cout<<"\n\n"<<p;
}

*/










class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            temp[i] = 0;
        }

        for (int num : nums) {
            temp[num]++;
        }

        for (int i = 0; i < n; i++) {
            cout<<nums[i];
        }

cout<<"\n\n";
         for (int i = 0; i < n; i++) {
            cout<<temp[i];
        }

        int maxFreq = temp[0];
        int maxEle = 0;
        for (int i = 0; i < n; i++) {
            if (temp[i] > maxFreq) {
                maxFreq = temp[i];
                maxEle = nums[i];
            }

        }

        return maxEle;
    }
};

int main()
{
    vector<int> a={2,2,1,1,1,2,2};
    //vector<int> a={3,2,3};
    Solution f;
    int p;
    p=f. majorityElement(a);
    cout<<"\n\n"<<p;
}

