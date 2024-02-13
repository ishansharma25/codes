#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;
/*vector<int> findMissingRepeatingNumbers(vector < int > a) 
{
     map<int,int> mp;
     
     vector < int > ans;
         for (int i = 1; i <= a.size(); i++) {
        mp[i] = 0;
    }
     
     for(int i=0;i<a.size();i++)
     {
        mp[a[i]]++;
     }
     for(auto it:mp)
     {
        cout<<it.first<<"--------------"<<it.second<<endl;
     }
  cout << endl;
  cout << endl;
 
     for(auto it:mp)
     {
        if(it.second==2)
        {
           
            ans.push_back(it.first);
        }
         if(it.second==0)
        {
           
            ans.push_back(it.first);
        }
   
       
     }
    
     return ans;
}*/
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    
    map<int, int> mp;
    int repeating = -1, missing = -1;

    for (int i = 0; i < a.size(); i++) 
    {
        if (mp[a[i]] == 0) 
        {
            mp[a[i]] = 1; // Mark the number as seen
        } 
        else 
        {
            repeating = a[i];
        }
    }

    for (int i = 1; i <= a.size(); i++) 
    {
        if (mp.find(i) == mp.end()) 
        {
            missing = i;
            break; // Break as soon as missing is found
        }
    }

    return { repeating, missing };
}



/*-----------------------optimal----------------------------------*/

int main() 
{
    vector<int> a={3,1,2,5,3};
    vector<int> ans=findMissingRepeatingNumbers(a);
  for (int i=0;i<ans.size();i++) {
        cout << ans[i];
    }
    cout << endl;
}