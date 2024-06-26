
class Solution:
    def solve(self, bt):
        n=len(bt)
        bt.sort()
        c=0
        wt=0
        sum=0
        for i in range(n):
            wt+=c
            c+=bt[i]
            
        


        return wt//n
        

'''
class Solution:
    def solve(self, bt):
        n=len(bt)
        bt.sort()
        c=[0]*n
        wt=[0]*n
        sum=0
        for i in range(n):
            c[i]=c[i-1]+bt[i]
        for i in range(n):
            wt[i]=c[i]-bt[i]
            sum+=wt[i]

        print(c)
        print(bt)
        print(wt)
        return sum//n
       
    '''        
