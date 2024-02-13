#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* -------------------------better solution-------------
int missing_number(vector<int> a,int n) 
{
   
  int f[n+1];
  for(int i=0;i<n-1;i++)
  {
    f[a[i]]++;
  }
 for(int i=1;i<n-1;i++)
  {
  if(f[i]==0)
  return i;
}
}*/


int missing_number(vector<int> a,int n) 
{
   cout<<"-------"<<n<<"---------";
   int sum=n*(n+1)/2;
   int s,sub;
   s=0;
   for(int i=0;i<n-1;i++)
   {
    s=s+a[i];
   }

  return (sum-s);
}

int main() 
{
    vector<int> a = {1,2,3,5,6};
    int n;
    cout<<"Enter size:";
    cin>>n;
    int number = missing_number(a,n);
    cout<<number;

    return 0;
}



/*1.
vector<int> missing_number(vector<int> a) 
{
    int n = a.size();
   int j=1;
  for(int i=0;i<n;i++)
  {
    if(j==a[i])
    {
        j++;
       
  }
  else{
    cout<<j;
       break;
    }
  }

}*/
