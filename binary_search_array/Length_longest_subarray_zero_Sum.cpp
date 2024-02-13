#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;

    /*---------------------------optimal-------------------------*/
    int zero_sum(vector<int> &a)
    {
        int max_len=0;
        int sum=0;
        map<int,int> mp;
        for(int i=0;i<a.size();i++)
        {
            sum=sum+a[i];
            if(sum==0)
            {
                max_len=max(max_len,i+1);
            }
           else if(mp.find(sum)!=mp.end())
            {
                max_len=max(max_len,i-mp[sum]);
            }
          else 
           mp[sum]=i;
        }
        return max_len;
    }
int main()
 {

  

  vector<int> a = {9, -3, 3, -1, 6, -5};
   int ans=zero_sum(a);
    cout <<ans;
    return 0;
}