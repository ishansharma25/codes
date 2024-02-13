#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;


/*
    vector<vector<int>> triple_number(vector<int> &a)
    {
        
         set<vector<int>> st;
         int i,j,k;
         int n=a.size();
         for(i=0;i<n;i++)
         {
            for( j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if (a[i] + a[j] + a[k] == 0)
                    {
                    vector<int> temp={a[i],a[j],a[k]};
                   sort(temp.begin(), temp.end());
                    st.insert(temp);
                    }
                }
            }
         }
      vector<vector<int>> p(st.begin(),st.end());
         return p;
    }
*/
/*-----------------------------------------better-----------------------------
vector<vector<int>> triple_number(vector<int> &a)
    {
        
         set<vector<int>> st;
           int n=a.size();
    

        int i,j;
        for(int i=0;i<n;i++)
        {
             map<int,int> mp;
            for(int j=i+1;j<n;j++)
            {
                int rem=-(a[i]+a[j]);
               

                if(mp.find(rem)!=mp.end())
                {
                    vector<int> temp={a[i],a[j],rem};
                     sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                 mp[a[j]]=j;
            }
        }
          vector<vector<int>> p(st.begin(),st.end());
         return p;
    }*/
    /*---------------------------optimal-------------------------*/
    vector<vector<int>> triple_number(vector<int> &a)
    {
        
           sort(a.begin(), a.end());
              vector<vector<int>> p;
           int n=a.size();
         

        int i;
        for(i=0;i<n;i++)
        {
            if(i!=0&&a[i]==a[i-1])
            continue;

            int j=i+1;
            int k=n-1;
            while(j<k)
            {
               int sum=a[i]+a[j]+a[k];
                if(sum<0)
                {
                    j++;
                }
               else if(sum>0)
                {
                    k--;
                }
                else
                {
                     vector<int> temp={a[i],a[j],a[k]};
                    p.push_back(temp);
                    j++;
                     k--;
                      while(j<k&&a[j]==a[j-1])
                      j++;
                     while(j<k&&a[k]==a[k+1])
                      k--;
                }
              
            }
        }
       
         return p;
    }
int main()
 {

    vector<int> a = {-1, 0, 1, 2, -1, -4};

  vector<vector<int>>  ans = triple_number(a);
 for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    return 0;
}