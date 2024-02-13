#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &a) {
    int max_n=INT_MIN;
    int n=a.size();
    int ans=-1;
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
      
        if(a[low]<=a[mid])
        {
            if(a[mid]>max_n)
            {
                max_n=a[mid];
                ans=mid;
            }
            low=mid+1;
        }
        else
        {
                if(a[mid]>max_n)
            {
                max_n=a[mid];
                ans=mid;
            }
            high=mid-1;
        }
    }
    return ans; 
}



/*int findPeakElement(vector<int> &a) {
    int max_n=INT_MIN;
    int ans=-1;
    for(int i=0;i<a.size();i++)
    {
        if(max_n<a[i])
        {
            max_n=a[i];
            ans=i;
        }
    }
    return ans; 
}*/
int main()
{
    vector<int> a = {1,1,2,2,3,3,4,5,5};
 
    int ans = findPeakElement(a);
  
        cout<< ans << "\n";
    return 0;
}
