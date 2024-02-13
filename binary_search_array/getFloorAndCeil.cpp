#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;


int floor_value(int a[], int n, int x)
{
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]<=x)
        {
            ans=mid;
            left=mid+1;
        }
        else if(a[mid]>x)
        {
            right=mid-1;
        }
    }
    return ans;

}
int ceil_value(int a[], int n, int x)
{
   
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]<x)
        {
            
            left=mid+1;
        }
        else if(a[mid]>=x)
        {
            ans=mid;
            right=mid-1;
        }
    }
    return ans;
}


pair<int, int> getFloorAndCeil(int a[], int n, int x)
{
	int f=floor_value(a,n,x);
   int c=ceil_value(a,n,x);
   return {f,c};
}

int main() 
{
	int a[] = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(a, n, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
	return 0;
}