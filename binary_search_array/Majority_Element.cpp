#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <cmath> 
#include <climits>
using namespace std;
class Solution {
public:

/*-------------------------------------brute force-------------------
   vector<int> most( vector<int>& nums) 
   {
    
    int n=nums.size();
    int N=floor(n/3);
   
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    cout<<mp.size();
     vector<int> ans(mp.size()-1,0);
    for(int i=0;i<mp.size();i++)
    {
       if(N<mp[i])
       {
        ans.push_back(i);
       }
     
    }
    return ans;
        
   }*/


   /*
    vector<int> most( vector<int>& nums) 
   {
    map<int,int> mp;
    for(int i:nums)
    {
       mp[i]++;
       if(mp.size()<=2)
       {
        continue;
       }
        map<int,int> mp1;
        for(auto m:mp)
        {
            if(m.second>1)
            {
                mp1[m.first]=m.second-1;
            }
        }
    
        mp=mp1;
    }
          vector<int> ans;
        int N=nums.size() / 3;
        for(auto m:mp)
        {
            if(count(nums.begin(), nums.end(), m.first)>N)
            {
                ans.push_back(m.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
       
    }*/

;

vector<int> most(vector<int> v) {
    int n = v.size(); //size of the array

    int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; // element 1
    int el2 = INT_MIN; // element 2

   
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != v[i]) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 == 0 && el1 != v[i]) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }

    vector<int> ls; 
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);


    return ls;
}
  
     
   
   
};

int main() {
    vector<int> nums = {1,1,1,2,2,2,3,3};

  Solution s;
  vector<int>  number = s.most(nums);
 
 for(int i=0;i<number.size();i++)
    {
        cout<<number[i];
    }
    return 0;
}