#include <climits>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
/*int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int ans=INT_MIN;
    int low=*max_element(boards.begin(),boards.end());
    int high=accumulate(boards.begin(),boards.end(),0);
   for(int i=low;i<=high;i++)
   {
       int count=1;
       int sum=0;
       for(int j=0;j<n;j++)
       {
           if(sum+boards[j]<=i)
           {
               sum+=boards[j];
              
           }
           else{
               count++;
               sum=boards[j];
           }
          

            //cout<<sum<<" ";
       }
       if(count==k)
       {
          return i;
       }

   }
   return low;
}*/

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int ans=INT_MIN;
    int low=*max_element(boards.begin(),boards.end());
    int high=accumulate(boards.begin(),boards.end(),0);
  while(low<=high)
  {
       int count=1;
       int sum=0;
       int mid=low+(high-low)/2;
       for(int j=0;j<n;j++)
       {
           if(sum+boards[j]<=mid)
           {
               sum+=boards[j];

           } else {
               count++;
               sum = boards[j];
           }

           // cout<<sum<<" ";
       }
       if(count>k)
       {
           low=mid+1;
       }
       else{
           
           high=mid-1;
       }
  }
  return low;
}
int main()
{
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
