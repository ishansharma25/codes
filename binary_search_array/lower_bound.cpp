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
        return low;
    }
    int mid=low+(high-low)/2;
    if(a[mid]<target)
    {
        
        return binarysearch(a,mid+1,high,target);
    }
    else  if(a[mid]>=target)
    {
       
      return binarysearch(a,low,mid-1,target);
        
    }

    
}

int lowerBound(vector<int> a, int n, int x) {

    
    return binarysearch(a,0,n-1,x);
}*/

int lowerBound(vector<int> a, int n, int x)

{
   
    int low=0;
    int ans=0;
    int high=n-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
       
        if(a[mid]<x)
        {
            low=mid+1;
        }
          else if(a[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }

    }
    return ans;
    
}
       

int main()
{
    vector<int> a= {1,2,3,4,5,6,7};
    int n=a.size();
    int c=lowerBound(a,n,5);
  cout<<"The maximum product subarray:"<<c;
    return 0;
}

/*

int binarysearch(vector<int> &a,int low,int high,int target)
{
    int ind=-1;
   
    if(low>high)
    {
        return high+1;
    }
    int mid=low+(high-low)/2;
    if(a[mid]<=target)
    {
        
        return binarysearch(a,mid+1,high,target);
    }
    else  if(a[mid]>target)
    {
       
      return binarysearch(a,low,mid-1,target);
        
    }

    
}

int upperBound(vector<int> &a, int x, int n){
	 return binarysearch(a,0,n-1,x);
}*/