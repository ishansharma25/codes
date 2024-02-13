#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr, int k)
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

        int maxi = 0, sum1 = 0;
    int starti = 0;
    int end, start = 0;
    sum1 = 0;
    int n=arr.size();

    for (int i = 0; i < n; i++) {
        sum1 += arr[i];

        if (sum1 > maxi) {
            maxi = sum1;
            starti = start;
            end = i;
        } else if (sum1 == maxi) {
            if (end - starti < i - start) {
                starti = start;
                end = i;
            }
        }

        if (sum1 < 0) {
            sum1 = 0;
            start = i + 1;
        }
    }
   
    
     vector<int> result;
    if (maxi == 0) {
        int maxElement = *max_element(arr.begin(), arr.end());
        result.push_back(maxElement);
        return result;
    }

    result.assign(arr.begin() + starti, arr.begin() + end + 1);
    return result;
}

int main() 
{
    int n;
    vector<int> a = {1 ,2 ,5 ,-7 ,2 ,3};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
   
    int number =  maxSubarraySum(a,2);
    cout<<"\n";
    cout<<number;
    return 0;
}
