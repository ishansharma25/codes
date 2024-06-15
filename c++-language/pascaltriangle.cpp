#include<iostream>
using namespace std;

int nCr(int n,int j)
{
    
int res=1;
if(j>n-j)
j=n-j;

for(int i=0;i<j;i++)
{
    res = res*(n - i);
        res =res/ (i + 1);
}
return(res);

}
int pascaltriangle(int n)
{

    
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<=i;j++)
        {
            
            cout<<" "<<nCr(i,j);
        }
        cout<<"\n";
    }
}
int main()
{
int n=7;
pascaltriangle(n);
}

/*
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
            << element << "n";
    return 0;
}*/