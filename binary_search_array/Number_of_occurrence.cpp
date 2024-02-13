#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;

int first_time(vector<int>& a, int n, int x)
{
	int low=0;
	int high=n-1;
	int cont=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		{
			cont=mid;
			high=mid-1;
		}
		else if(a[mid]<x)
		{
			low=mid+1;
		}
		else if(a[mid]>x)
		{
			high=mid-1;
		}
	}
	return cont;
}

int last_time(vector<int>& a, int n, int x)
{
	int low=0;
	int high=n-1;
	int cont=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		{
			cont=mid;
			low=mid+1;
		}
		else if(a[mid]<x)
		{
			low=mid+1;
		}
		else if(a[mid]>x)
		{
			high=mid-1;
		}
	}
	return cont;
}

int count(vector<int>& a, int n, int x) {
	int f=first_time(a,n,x);
	int l=last_time(a,n,x);
    	if(f==-1||l==-1)
	return 0;
	

	return l-f+1;
}
int main()
{
     vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: "
         << ans << "\n";
    return 0;
}