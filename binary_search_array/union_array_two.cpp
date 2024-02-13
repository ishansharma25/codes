#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedArray(vector<int> a, const vector<int>& b) 
{
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
vector<int> temp;

    while(i<n&&j<m)
    {
        
        if(a[i]<=b[j])
        {
            
             if(temp.size()==0||temp.back()!=a[i])
            {
               
            temp.push_back(a[i]);
            }
             i++;
        }
       else 
        {
             if(temp.size()==0||temp.back()!=b[j])
            {
                temp.push_back(b[j]);
       
            }
             j++;
        }
    }

      while (i < n)
      {
         if(temp.back()!=a[i])
            {
        temp.push_back(a[i]);
            }
            i++;
      }

    
    while (j < m)
      {
         if(temp.back()!=b[j])
            {
        temp.push_back(b[j]);
            }
            j++;
      }


    for (int i = 0; i < temp.size(); ++i) 
    {
        cout << temp[i] << " ";
    }

    return temp;
}

int main() 
{
    vector<int> a = {1,2,3,3};
    vector<int> b = {2,2,4};

    vector<int> mergedArray = sortedArray(a, b);

    return 0;
}
