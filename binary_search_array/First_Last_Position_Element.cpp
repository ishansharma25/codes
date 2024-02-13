#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;


int last_value(vector<int>& a, int n, int x)
{
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]==x)
        {
            ans=mid;
            
            left=mid+1;
        }
       
      else if(a[mid]<x)
        {
           
            
            left=mid+1;
        }
        else if(a[mid]>x)
        {
            right=mid-1;
        }
    }
    return ans;
}
int first_value(vector<int>& a, int n, int x)
{
   
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]==x)
        {
            ans=mid;
            
              right=mid-1;
        }
        if(a[mid]<x)
        {
            
            left=mid+1;
        }
        else if(a[mid]>=x)
        {
           
            right=mid-1;
        }
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& a, int n, int k)
{

	int f=first_value(a,n,k);
   int c=last_value(a,n,k);
   return {f,c};
}

int main() 
{
	
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, k = 8;
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "The first and last positions are: "
         << ans.first << " " << ans.second << "\n";
    return 0;
}