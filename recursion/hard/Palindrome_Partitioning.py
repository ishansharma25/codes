class Solution:
    def partition(self, s: str) -> List[List[str]]:

        if(len(s)==0):
            return ans
        

        def helper(s,ans,st,i):
            if(len(s)==i):
                st.append(ans[:])
                return
            for k in range(i,len(s)):
                sub=s[i:k+1]
                if(ispalindrom(sub)):
                    ans.append(sub)
                    helper(s,ans,st,k+1)
                    ans.pop()

        def ispalindrom(sub):
            start=0
            end=len(sub)-1
            while(start<end):
                if(sub[start]!=sub[end]):
                    return False
                end=end-1
                start=start+1
            return True
        ans=[]
        st=[]
        helper(s,ans,st,0)

        return st
        

            
            
        
