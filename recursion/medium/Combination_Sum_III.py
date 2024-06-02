class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ans=[]
        def sub(l,n,i):
            if(k==len(l)):
                if(n==0):
                    ans.append(l.copy())
                return
            
            for j in range(i,10):
                l.append(j)
                sub(l,n-j,j+1)
                l.pop()
        
        sub([],n,1)
        return ans
        

