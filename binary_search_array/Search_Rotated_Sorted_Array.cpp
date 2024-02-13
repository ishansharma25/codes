#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

/*
void reverse1(vector<int> &a,int s,int e)
{
    while(s<e)
    {
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }

}
void rotate_array(vector<int> &a,int n,int k)
{
   
  /*reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    reverse(a.begin(), a.end());
      reverse1(a, 0, k - 1);
    reverse1(a, k, n - 1);
    reverse1(a, 0, n - 1);
      
         
}

int binary_search(vector<int>& a, int n, int x)
{
	int low=0;
	int high=n-1;
	int cont=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		{
			return mid;
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
    return -1;
	
}
int search(vector<int> &a,int n,int k)
{
    int max=INT_MIN;
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            ind=i;
           
        }
    }
    
    rotate_array(a,n,ind+1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    binary_search(a,n,k);

}*/

int search(vector<int> &a,int n,int k)
{
    int low=0;
	int high=n-1;

	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==k)
		{
			return mid;
		}
		else if(a[low]<=a[mid])
		{
            if(a[low]<=k&&k<=a[mid])
            high=mid-1;
            else
            low=mid+1;
			
		}
		else if(a[high]>=a[mid])
		{
            if(a[high]>=k&&k>=a[mid])
			low=mid+1;
            else
            high=mid-1;
		}
	}
    return -1;
}
int main()
{
    vector<int> a = {7,8,9,1,2,3,4,5,6};
    int n = 9, k = 1;
    int ans = search(a, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}