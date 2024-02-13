#include<iostream>
#include<vector>
using namespace std;


/*-------------------------------- BRUTE FORCE----------------------------
void mrow(vector<vector<int>> &m,int n1, int n2,int i)
{
    for(int j=0;j<n2;j++)
    {
        if(m[i][j]!=0)
        m[i][j]=-1;
    }
}

void mcol(vector<vector<int>> &m,int n1, int n2,int j)
{
    for(int i=0;i<n1;i++)
    {
        if(m[i][j]!=0)
        m[i][j]=-1;
    }
}


vector<vector<int>> zeroMatrix(vector<vector<int>> &m, int n1, int n2)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(m[i][j]==0)
            {
               
                mcol(m,n1,n2,j);
                 mrow(m,n1,n2,i);
            }
        }
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (m[i][j] == -1) {
                m[i][j] = 0;
            }
        }
    }
    return m;
    
}
*/



vector<vector<int>> zeroMatrix(vector<vector<int>> &m, int n1, int n2)
{
    int r=m.size();
    int c=m[0].size();
    int row[r]={0};
    int col[c]={0};
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[0].size();j++)
        {
            if(m[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for (int i = 0; i < m.size(); i++)
    {
         for(int j=0;j<m[0].size();j++)
        {
            if(row[i]||col[j])
            {
                m[i][j]=0;
            }
        }
    }
         
return m;
    
}



int main()
{

    
    int n1=3,n2=3;
    vector<vector<int>> m1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
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
    vector<vector<int>> m =zeroMatrix(m1,n1,n2);
      for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[i].size();j++)
        {
    
                cout<<m[i][j];
        
        }
        cout << endl;
}
}


