

class Solution:
    def findXOR(self, l, r):
        def helper(n):
            if(n%4==1):
                return 1
            elif(n%4==2):
                return n+1
            elif(n%4==3):
                return 0
            else:
                return n
        return helper(l-1)^helper(r)
        
        
        '''
class Solution:
    def findXOR(self, l, r):
        ans=0
        while(l<=r or r>=l):
            ans=l^r
            l+=1
            r-=1
        return ans
            '''
