#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>& a)
{
	int n=a.size();
	int min_n=INT_MAX;
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;

		if(a[low]<=a[mid]&&a[low]>a[high])
		{
			
			min_n=min(min_n,a[mid]);
			low=mid+1;
			
		}
		else
		{
			
			min_n=min(min_n,a[mid]);
			high=mid-1;
			
		}
	}
	return min_n;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}