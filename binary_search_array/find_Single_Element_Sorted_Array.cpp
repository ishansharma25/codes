#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& a)
{
	int n=a.size();
	int low=0;
	int high=n-1;
	int ans=0;
	int ans1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
	if(mid%2==1)
	{
		if(a[mid]==a[mid-1])
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}

	}
	else if(mid%2==0)
	{
		if(a[mid]==a[mid+1])
		{
			low=mid+2;
		}
		else{
			high=mid-1;
		}

	}

	}
	return a[low];

}
int main()
{
    vector<int> a = {1,1,2,2,3,3,4,5,5};
 
    int ans = singleNonDuplicate(a);
  
        cout<< ans << "\n";
    return 0;
}
