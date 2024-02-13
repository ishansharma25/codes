#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedArray(vector<int> a, const vector<int>& b) 
{
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;

    while(i<n&&j<m)
    {
        if(a[i]==b[j])
        {
            a[i]==b[j];
            j++;
        }
        i++;
}
  for (int i = 0; i < a.size(); ++i) 
    {
        cout << a[i] << " ";
    }

}

int main() 
{
    vector<int> a = {1,2,3,3};
    vector<int> b = {2,2,4};

    vector<int> mergedArray = sortedArray(a, b);

    return 0;
}
