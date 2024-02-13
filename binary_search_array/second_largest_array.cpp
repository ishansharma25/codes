#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{

/*--------------------------BRUTE FORCE-------------------------- O(NLOGN)+N

    int second_largest(vector<int> a)
    {
         int n=a.size();
        sort(a.begin(),a.end());
       

       
        int largest_number=a[n-1];
      
        int second;
        for (int i =n-2; i >= 0; i--)
        {
            if(a[i]!=largest_number)
            {
                second=a[i];
                break;
            }
        }
        return second;
        
    }---------------------------------------------------------------------------*/


/*--------------------------BETTER APPROCH-------------------------- O(2N)
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
int second_largest(vector<int> a)
    {
         int n=a.size();
        int largest_numbe=largest_number(a);
      
        int second=-1;
        for (int i=0;i<n;i++)
        {
            if(a[i]>second&&a[i]!=largest_numbe)
            {
                second=a[i];
               
            }
        }
        return second;

    }---------------------------------------------------------------*/

/*--------------------------Optimal APPROCH-------------------------- */

int second_largest(int n,vector<int> a)
{
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            slargest=largest;//currnt largest become second largest
            largest=a[i];
        }
        else if (a[i]<largest&&a[i]>slargest)
        {
        
            slargest=a[i];
        }
    }
    return slargest;
}

int second_smallest(int n,vector<int> a)
{
    int smallest=a[0];
    int ssmallest=10000;
    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            ssmallest=smallest;//currnt smallest become second smallest
            smallest=a[i];
        }
        else if (a[i]>smallest&&a[i]<ssmallest)
        {
            ssmallest=a[i];
        }
    }
    return ssmallest;
}
public:
vector<int> getSecondOrderElements(int n, vector<int> a)
 {
    int slargest=second_largest(n,a);
    int ssmallest=second_smallest(n,a);
    vector<int> result;
    result.push_back(slargest);
    result.push_back(ssmallest);

    return result;
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
   //int r= s.second_largest(a);
   vector<int> result=s.getSecondOrderElements(n,a);
     cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;
    return 0;
}
