#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int countDigits(int n)
{

   int x = n; int count =0;
   int a;
   vector<int> v;
   while( x !=0 ) 
   {
       a =x%10;
       v.push_back(a);

      x=x/10;
       
   }
   for (int i = 0; i < v.size(); i++) 
   {
    if(v[i]!=0)
       {
       cout<<v[i]<<"sd";
       }
   }

   for(int i=0;i<v.size();i++)
   {
    
       if(n%v[i]==0&&v[i]!=0)
       {
           count++;
       }
   }
   
   return count;
}
int main()
{
    int h=countDigits(660);
    cout<<h;
    
}