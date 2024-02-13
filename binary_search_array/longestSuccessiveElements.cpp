#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    set<int> ms(begin(a),end(a));
    int longest=0;
    for(int i=0;i<n;i++){
      
        if(ms.find(a[i]-1)==ms.end())
        { 
           int currentNum = a[i];
            int currentLength = 1;
              while (ms.find(currentNum+1) != ms.end())
               {
                        currentNum++;
               currentLength++;
              }

              longest = max(longest,  currentLength);
        }
    }
    return longest;
}
int main() 
{
    int n;
    vector<int> a = {1,2,3,2};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
   
int c=superiorElements(a);

    cout<<c[i];

    
    return 0;
}