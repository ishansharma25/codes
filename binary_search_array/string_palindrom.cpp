#include<iostream>
#include<vector>
using namespace std;
vector<string> Palindrome(string &str,int i)
{
    if(i>str.size())
    return {};
    vector<string> r=Palindrome(str,i+1);
    for(int j=0;j<r.size();j++)
    r.push_back(str[j]);
    return r;
}

void isPalindrome(string& str) {
    int i=0;
    vector<string> r= Palindrome(str,i);
     for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
    
   // if(strcmp(Palindrome(str,i),str))
   // return(true);
//return false;

}
int main() {

  string str = "ABCDCBA";
   isPalindrome(str);

  return 0;
}