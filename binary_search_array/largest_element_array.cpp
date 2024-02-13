#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    int largest_number(vector<int> &a)
    {
    int n=a.size();
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
    }
};

int main()
{
    vector<int> a;
    int n;
    cout<<"Enter number of element:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        a.push_back(element);
    }
    Solution s;
   int r= s.largest_number(a);
   cout<<r;
    return 0;
}
