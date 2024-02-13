#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*-------------------------------- BRUTE FORCE----------------------------



vector<vector<int>> rotateMatrix(vector<vector<int>> &m)
{
    int n=m.size();
    vector<vector<int>> ma(n,vector < int > (n, 0));
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        ma[j][n-i-1]=m[i][j];
    }
 }
         
return ma;
    
}*/

/*-------------------------------- optimal approach----------------------------*/

vector<vector<int>> rotateMatrix(vector<vector<int>> &m)
{
    int n=m.size();
    
 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        swap(m[i][j],m[j][i]);
    }
 }
    for (int i = 0; i < n; i++)
    {
        reverse(m[i].begin(), m[i].end());
    }
         
return m;
    
}

int main()
{

    
    int n1=3,n2=3;
    vector<vector<int>> m1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   /* for(int i=0;i<n1;i++)
    {
        vector<int> row;
        for(int j=0;j<n2;j++)
        {
            int element;
            cout<<"enter element"<<i<<","<<j<<":";
            cin>>element;
            row.push_back(element);
        }
        m.push_back(row);
    }*/
    vector<vector<int>> m =rotateMatrix(m1);
      for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[0].size();j++)
        {
    
                cout<<m[i][j];
        
        }
        cout << endl;
}
}