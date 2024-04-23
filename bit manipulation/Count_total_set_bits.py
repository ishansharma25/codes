
def countSetBits(n: int) -> int:
    c=0
    for i in range(n+1):
        while(i>0):
            if(i%2==1):
                c+=1
            i=i//2
        if i==1:
            c=c+1
    return c
        
