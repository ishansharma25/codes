


#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
	int n=a.size();	
	int m=b.size();
	int left=n-1;
	int right=0;
	
	while(left>=0&&right < m)
	{
		if(a[left]>b[right])
		{
			swap(a[left],b[right]);
			left=left-1;
			right++;
		}
		else
		{
			break;
		}
	}
	sort(a.begin(), a.end());
    sort(b.begin(), b.end());
	
	// Write your code here.
	
}
int main()
{
   vector<long long> arr1= {1, 4, 8, 10};
    vector<long long>  arr2 = {2, 3, 9};
   int n,m;
   	n=arr1.size();	
	m=arr2.size();
    mergeTwoSortedArraysWithoutExtraSpace(arr1,arr2);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

