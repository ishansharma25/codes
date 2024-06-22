class Solution:
    def lemonadeChange(self, s: List[int]) -> bool:
        f=0
        t=0
        ty=0
        for i in range(len(s)):
            if(s[i]==5):
                f+=1
            elif(s[i]==10):
                if(f):
                    f-=1
                    t+=1
                else:
                    return False
            else:
                if(f and t):
                    f-=1
                    t-=1
                    ty+=1
                elif f >= 3:
                    f -= 3
                else:
                    return False
        return True                

        
