#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
/*vector<vector<int>> merge_overlap(vector<vector<int>>&a) 
{
     vector<vector<int>> ans;
     int n=a.size();
     sort(a.begin(),a.end());
     for(int i=0;i<ans.size();i++)
     {
        int start=a[i][0];
        int end=a[i][1];
        if(!ans.empty()&&end<=ans.back()[1]);
        continue;

        for(int j=i+1;j<n;j++)
        {
            if(a[j][0]<=end)
            {
                end=max(end,a[j][1]);
            }
            else
            {
                break;
            }
        }
         ans.push_back({start,end});
     }
    
     return ans;
}*/


/*-----------------------optimal----------------------------------*/
vector<vector<int>> merge_overlap(vector<vector<int>>&a) 
{
     vector<vector<int>> ans;
     int n=a.size();
     sort(a.begin(),a.end());
    
     return ans;
}
int main() 
{
    vector<vector<int>> a={{1, 2}, {1, 3}, {1, 6}, {3, 4}};
    vector<vector<int>> ans=merge_overlap(a);
    for (auto it : a) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
}