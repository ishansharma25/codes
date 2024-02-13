#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

/*-------------------------------- optimal approach----------------------------*/

int count_numberof_subarray(vector<int> &m,int k)
{
     map<int,int> mp;
      int sum=0;
    int max_len=0;
    int count=0;
    for(int i=0;i<m.size();i++)
    {
        sum=sum+m[i];
        if(sum==k)
        {
            max_len=max(max_len,i+1);
            count++;
        }
        int rem=sum-k;
        if(mp[rem])
        {
          
            int len=i-mp[rem];
            max_len=max(max_len,len);
             count++;
             
        }
          if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
           
        }

    }
    cout<<max_len;
         
return count;
    

    
}

int main()
{

    
    int n1=3,n2=3;
    vector<int> m1={3,1,2,4};

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
            int  m =count_numberof_subarray(m1,6);
             cout<<m;
}
