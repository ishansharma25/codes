
class Solution:
    def sieve(self,x):
        i=2
        l=[]
        while(i*i<=x):
            if(x%i==0):
                while(x%i==0):
                    l.append(i)
                    x=x//i
            i=i+1
        if x > 1:
            l.append(x)
        return l  
        
    def findPrimeFactors(self, N):
        results = []
        for i in range(N):
            g=self.sieve(N[i])
            results.append(g)
        return results
