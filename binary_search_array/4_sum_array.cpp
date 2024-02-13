#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

    /*---------------------------optimal-------------------------*/
    vector<vector<int>> four_number(vector<int> &a,int target)
    {
        
           sort(a.begin(), a.end());
              vector<vector<int>> p;
           int n=a.size();
         

        int i;
        int l;
        for(i=0;i<n;i++)
        {
            

            if(i!=0&&a[i]==a[i-1])
            continue;
            for(l=i+1;l<n;l++)
            {
                if(l>i+1&&a[l]==a[l-1])
                continue;

            int j=l+1;
            int k=n-1;
            while(j<k)
            {
              long long sum=a[i]+a[j]+a[k]+a[l];
               if(sum == target)
                {
                     vector<int> temp={a[i],a[j],a[k],a[l]};
                    p.push_back(temp);
                    j++;
                     k--;
                      while(j<k&&a[j]==a[j-1])
                      j++;
                     while(j<k&&a[k]==a[k+1])
                      k--;
                }
                else if(sum<target)
                {
                    j++;
                }
               else if(sum>target)
                {
                    k--;
                }
                
              
            }
        }
    }
       
         return p;
    }
int main()
 {

    vector<int> a = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};

  vector<vector<int>>  ans = four_number(a,9);
 for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    return 0;
}