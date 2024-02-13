#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
    /*----------------------------------better solution----------------
    

    int max_ele=INT_MIN;
    for(int i=0;i<n;i++)
    {
    int sum=0;

        for(int j=i;j<n;j++)
        {
          
            sum=sum+arr[j];
        
        max_ele=max(max_ele,sum);
        }
    }
    return max_ele;*/

    /*----------------------------------optimal  solution----------------*/

    long long max_ele = LONG_MIN; // maximum sum
    long long sum = 0;
    if (n == 0) {
        // Handle the case when the array is empty
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>=max_ele)
        {
            max_ele=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
     if(max_ele<0)
    return 0;
    return max_ele;
}
int main() 
{
    int n;
    vector<int> a = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
    n=a.size();
    int number =  maxSubarraySum(a,n);
    cout<<number;
    return 0;
}