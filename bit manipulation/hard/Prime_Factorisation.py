class Solution:
    def sieve(self):
        a=10
    def findPrimeFactors(self, N):
        def seve(x):
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
        results = []
        for i in range(N+1):
            g=seve(i)
            #results.append(g)
        return g
        
