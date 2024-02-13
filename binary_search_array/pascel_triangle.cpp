#include<iostream>
#include<vector>
using namespace std;

/*
vector<vector<int>> Triangle(int n)
{
    
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        vector<int> row(i+1,1);
    
    
        for(int j=1;j<i;j++)
        {
            row[j]=ans[i-1][j-1]+ans[i-1][j];
        }
            ans.push_back(row);
    }

    return ans;
}



void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int coef = 1;
        for (int space = 1; space < n - i; space++)
            cout << "  ";

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << setw(4) << coef;
        }
        cout << endl;
    }
}*/



vector<vector<int>> Triangle(int n) {
    vector<vector<int>> triangle;

    for (int i = 0; i <n; i++) {
        vector<int> row(i + 1, 1);
        int coef = 1;

        for (int j = 1; j <i; j++) {
            coef = coef * (i - j + 1)/j ;
            row[j] = coef;
        }

        triangle.push_back(row);
    }

    return triangle;
}

int main()
{

    
 
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
    vector<vector<int>> m =Triangle(5);
      for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[i].size();j++)
        {
    
                cout<<m[i][j]<<" ";
        
        }
        cout << endl;
}
}


