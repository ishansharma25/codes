#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &a)
{
	int n=a.size();
	int min_n=INT_MAX;
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(a[low]<=a[high])
		{
			if(min_n>a[low])
			{
				min_n=a[low];
				ans=low;
				break; 
			}
			

		}
		if(a[low]<=a[mid])
		{
			if(min_n>a[mid])
			{
				min_n=a[mid];
				ans=mid;
				
				
			}
			low=mid+1;
		
			
		}
		else
		{
			
			if(min_n>a[mid])
			{
				min_n=a[mid];
				ans=mid;
				
			}
			high=mid-1;
			
		}
	}
	return ans;
}
int main()
{
    vector<int> a = {7,8,9,1,2,3,4,5,6};
 
    int ans = findKRotation(a);
  
        cout<< ans << "\n";
    return 0;
}