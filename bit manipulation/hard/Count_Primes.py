class Solution:
    def countPrimes(self, n: int) -> int:
        '''
        set array of length n and put value 1 or true 
        then iterate from 2 to n and set all the number as false or 0 
        if they are not primed j=j+i so that j travel with a fix value of multiple
        i=5
        j=2*i------>10===2*5
        j=10+5------>15==2*3
        j=15+5------>20==2*5...
        to reduce iteration space we use i*i
        j=i*i
        '''

      
        l = [True] * n
        if(n>1):
            l[0], l[1] = False, False
        else:
            return 0
        
        for i in range(2,int(n**0.5)+1):
            if(l[i]):
                j=i*i # to check that it does not accessed the range
                '''
        for j in range(i*i, n, i):
            l[j] = False
            '''
                while(j<n):                    
                    l[j]=False
                    j=j+i
        '''   
        for i in range(2,n):
            if(l[i]):
                j=2*i
                while(j<n):                    
                    l[j]=False
                    j=j+i
                '''   

        return sum(l)
