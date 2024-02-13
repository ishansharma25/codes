#include<iostream>
#include<algorithm>
using namespace std;




/*-------------------optimal-1----------------
class Solution
{
    public:
    void rotate(int nums[],int n,int k)
    {
       int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[(i-k+n)%n]=nums[i];//for right use i+k
        }
        for(int i=0;i<n;i++)
       {
        nums[i]=temp[i];
       }
        for(int i=0;i<n;i++)
       {
        cout<<nums[i]<<" ";
       }
    }
};
int main()
{
    int n,k;
    cout<<"enter number of term:";
    cin>>n;
    cout<<"enter place of rotation:";
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value-"<<i<<":";
        cin>>a[i];
    }
    Solution s;
    int p=sizeof(a) / sizeof(a[0]);//extra space
    s.rotate(a,p,k);

}*/

class Solution
{
    public:
    /*void reverse1(int a[],int start,int end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
     void rotate1(int a[],int n,int k)
    {
       reverse1(a,0,n-k-1);
       reverse1(a,n-k,n-1);
       reverse1(a,0,n-1);
    }*/
    void rotate(int a[],int n,int k)
    {
       reverse(a,a+k);
       reverse(a+k,a+n);
       reverse(a,a+n);
    }
};
int main()
{
    int n,k;
    cout<<"enter number of term:";
    cin>>n;
    cout<<"enter place of rotation:";
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value-"<<i<<":";
        cin>>a[i];
    }
    Solution s;
    int p=sizeof(a) / sizeof(a[0]);//extra space
    s.rotate(a,p,k);
     for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }

}



