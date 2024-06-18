class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        st=""
        d={}
        def helper(i):
            if i in d:
                return d[i]
            if i==len(s):
                return True
            st=""
            for j in range(i,len(s)):
                st+=s[j]
                if st in wordDict and helper(j+1):
                    d[i]=True
                    return True
            d[i]=False
            return False
        return helper(0)

            
            

