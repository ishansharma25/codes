#include<iostream>
#include<algorithm>
using namespace std;

/*---------------------brute force o(n)----------------
class Solution
{
    public:
    void rotate(int a[],int n)
    {
       
       int temp[n];
       int j=0;
       for(int i=1;i<n;i++)
       {
        temp[j]=a[i];
        j++;
       }
       temp[n-1]=a[0];
       for(int i=0;i<n;i++)
       {
        a[i]=temp[i];
       }
       for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }
    }
};
int main()
{
    int n;
    cout<<"enter number of term:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value-"<<i<<":";
        cin>>a[i];
    }
    Solution s;
    int p=sizeof(a) / sizeof(a[0]);
    s.rotate(a,p);

}*/



/*---------------------optimal so;ution----------------*/
class Solution
{
    public:
    void rotate(int a[],int n)
    {
        int temp;
        temp=a[0];
        for(int i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
         for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }
    }
};
int main()
{
    int n;
    cout<<"enter number of term:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value-"<<i<<":";
        cin>>a[i];
    }
    Solution s;
    int p=sizeof(a) / sizeof(a[0]);
    s.rotate(a,p);

}
