class Solution:
    def myPow(self, x: float, n: int) -> float:
        m=n
        ans=1.0
        if(n<0):
            n*=-1
        while(n>0):
            if(n%2==1):
                ans=ans*x
                n=n-1
            else:
                n=n/2
                x=x*x
        if(m<0):
            return (1/ans)
        else:
            return ans


       
