def isKthBitSet(n: int, k: int) -> bool:
    l=[]
    while(n>0):
        if(n%2==1):
            l.append(1)
        else:
            l.append(0)
        n=n//2
    if(l[k-1]==1):
        return True
    return False
