#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
	int n=arr.size();
	int low=0;
	int high=n-1;
	int ind=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==m)
		{
			return mid;
		}
		if(arr[mid]>m)
		{
			
			high=mid-1;
		}
	
		else if(arr[mid]<m)
		{
			ind=mid;
			low=mid+1;
		}

	}
	return ind+1;
	}
	int main()
{
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}
