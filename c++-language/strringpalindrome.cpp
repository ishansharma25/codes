#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s)
    {
        int n;
        string ans="";
        n=s.length();
        char ch[n];
        
        for(int i=0;i<n;i++)
        {
            ch[i]=tolower(s[i]);
        }
        s="";
        for(int i=0;i<n;i++)
        {
        if(ch[i]==' '||ch[i]==',')
        continue;
        else
        s=(s+ch[i]);
        }
        cout<<s;
        ans="";
        for(int i=n-1;i>=0;i--)
        {
            
        if(ch[i]==' '||ch[i]==',')
        continue;
        else
        ans=(ans+ch[i]);
        }
        cout<<"\n"<<ans;
   int count=0;
   for(int i=0;i<n;i++)
        {
            if(s[i]==ans[i])
            {
                count=1;
            }
            else{
                break;
            }
        }
        if(count==1)
        return true;
        else
        return false;

    }
};
int main()
{
    string s=".A";
    Solution a;
    bool p=a.isPalindrome(s);
    cout<<p;
}