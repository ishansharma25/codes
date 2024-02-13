#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;



int main() 
{ 
  int n=3;

  
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
        for(int j=1;j<=2*n-2*i;j++)
       {
           cout<<" ";
       }
        for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<"\n";
   }

for(int i=n;i>=0;i--)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
        for(int j=1;j<=2*n-2*i;j++)
       {
           cout<<" ";
       }
        for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<"\n";
   }


}


/*
int main() 
{ 
  int n=3;
   char c='A';
   int s=c+n;
   for(int i=0;i<n;i++)
   {
    int s=c+n-1;
    
       for(int j=i;j>=0;j--)
       {
        int ss=s-j;
        
           cout<<char(ss);


       }
       cout<<"\n";
   }
   }*/


/*
int main() 
{ 
  int n=3;
  char c='A';
   int s=c+n;
   for(int i=1;i<=n;i++)
   {
      int s=65+n-1;
       for(int j=i-1;j>=0;j--)
       {
           int ss=s-j;
           cout<<char(ss);
           

       }
       cout<<"\n";
   }
       }*/