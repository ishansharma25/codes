class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        f=start^goal
        c=0
        while(f):
            if(f&1==1):
                c+=1
            f>>=1
        return c

        
        
