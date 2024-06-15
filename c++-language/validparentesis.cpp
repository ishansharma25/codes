#include<bits/stdc++.h>
#include<string.h>
#include<stack>
using namespace std;

class Solution
{
    public:
    bool isValid(string s)
    {
        stack<char> temp;
        for(int i=0;i<s.size();i++)
        {

            if(temp.empty())
            {
            temp.push(s[i]);
            }
            else if(temp.top()=='('&&s[i]==')'||temp.top()=='{'&&s[i]=='}'||temp.top()=='['&&s[i]==']')
            {
                temp.pop();
            }
            else
            {
               temp.push(s[i]); 
            }


        }
        if(temp.empty())
        {
            return true;

        }
        return false;
    }

};
int main()
{
    string ex="{()}[]";
    Solution s;
    if(s.isValid(ex))
    {
        cout<<"done";

    }
    else
    {
        cout<<"not done";
    }
    return 0;
}