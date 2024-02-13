#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;
int merge(vector<int>&a, int low,int mid,int high)
{
    int n=high-low+1;
    int left=low;
    vector<int> ans;
    int c=0;
    int right=mid+1;
    while(left<=mid&&right<=high)
    {
        
        if(a[left]<=a[right])
        {
            ans.push_back(a[left]);
            left++;
        }
        else
        {
            ans.push_back(a[right]);//c=1+2+1+3+3
             c+=mid-left+1;
            right++;
           
        }
    }
    while(left<=mid)
    {
        ans.push_back(a[left]);
        left++;
    }
      while(right<=high)
    {
        ans.push_back(a[right]);
        right++;
    }
      for(int i=low;i<=high;i++)
    {
         a[i] = ans[i - low];
    }
    return c;
}

int mergesort(vector<int>&a, int low,int high)
{
    int count=0;
    if(low>=high)
    {
        return count;
    }
    else{
        int mid=low+(high-low)/2;
    count+=mergesort(a,low,mid);
    count+=mergesort(a,mid+1,high);
    count+=merge(a,low,mid,high);
    }
    return count;

}


int main()
{
 vector<int> a={5, 4, 3, 2, 1};
    int ans=mergesort(a,0,a.size()-1);

        cout << ans;
}
  