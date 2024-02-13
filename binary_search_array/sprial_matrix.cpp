#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*-------------------------------- optimal approach----------------------------*/

vector<int> spiralMatrix(vector<vector<int>> &m)
{
    int n=m.size();
     int n1=m[0].size();
    vector<int> ans;
    int top=0,left=0,bottom=n-1,right=n1-1;
    while(left<=right &&top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(m[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(m[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--)
        {
            ans.push_back(m[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>=top;i--)
        {
            ans.push_back(m[i][left]);
        }
        left++;
    }
         
return ans;
    
}

int main()
{

    
    int n1=3,n2=3;
     vector<vector<int>> m1{{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
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
    vector<int> m =spiralMatrix(m1);
      for(int i=0;i<m.size();i++)
    {
    
                cout<<m[i]<<" ";
}
}