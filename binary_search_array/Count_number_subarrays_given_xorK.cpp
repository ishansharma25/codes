#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;

    /*---------------------------optimal-------------------------*/
    int subarraysWithSumK(vector < int > a, int b) {
   
        int count=0;
        int xr=0;
        map<int,int> mp;
         mp[xr]=1;
         
        for(int i=0;i<a.size();i++)
        {
            xr=xr^a[i];
            int x=xr^b;
            
            count=count+mp[x];
           
            mp[xr]++;
        }
      
        return count;
}
int main()
 {
  vector<int> a = {4, 2, 2, 6, 4};
   int ans=subarraysWithSumK(a,6);
    cout <<ans;
    return 0;
}