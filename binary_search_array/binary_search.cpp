#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;

/*-------------------------------recrusive metod------------------
int binarysearch(vector<int> &a,int low,int high,int target)
{
    int ind=-1;
    if(low>high)
    {
        return -1;
    }
    int mid=low+(high-low)/2;
    if(a[mid]==target)
    {
        return mid;
    }
    else if(a[mid]<target)
    {
        return binarysearch(a,mid+1,high,target);
    }
    else  if(a[mid]>target)
    {
       return binarysearch(a,low,mid,target);
    }

    return 0;
}
int search(vector<int> &a,int target)

{
    int n=a.size();
    return binarysearch(a,0,n-1,target);
    
}*/
int search(vector<int> &a,int target)

{
    int n=a.size();
    int low=0;
    int high=n-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==target)
        {
        return mid;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
          else if(a[mid]>target)
        {
            high=mid-1;
        }

    }
    return -1;
    
}
       

int main()
{
    vector<int> a= {1,2,3,4,5,6,7};
    int c=search(a,5);
  cout<<"The maximum product subarray:"<<c;
    return 0;
}