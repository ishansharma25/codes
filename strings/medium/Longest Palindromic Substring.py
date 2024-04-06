
''' not good try again some day
class Solution:
    def longestPalindrome(self, s: str) -> str:
        if(len(s)<2):
            return s
        s1=s[:]
        h=0
        i=0
        temp=""
        temp1=""
        n=len(s)
        h=0
        j=n-1
        while(i<n):
            if(s[i]==s1[j]):
                i+=1
                j-=1
                temp+=s[i]
                while(s[i]==s1[j]and j>0 and i<n):
                   # print(h)
                    i+=1
                    j-=1
                    temp+=s[i]
                    if(len(temp)>len(temp1)):
                        temp1=temp

            else:
                j=j-1
               # print("assa")
            if(j<0):
               # print("a")
                i=h+1
                j=n-1
            

        return temp
        '''
class Solution:
    def longestPalindrome(self, s: str) -> str:
        res=""
        n=0
        for i in range(len(s)):
            l,r=i,i
            while(l>=0 and r<len(s) and s[l]==s[r]):
                if((r-l+1)>n):
                    n=r-l+1
                    res=s[l:r+1]
                l-=1
                r+=1

            l,r=i,i+1
            while(l>=0 and r<len(s) and s[l]==s[r]):
                if((r-l+1)>n):
                    n=r-l+1
                    res=s[l:r+1]
                l-=1
                r+=1
        return res
