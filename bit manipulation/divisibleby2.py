def isPowerOfTwo(n:int) -> bool:
    if(n&(n-1)==0):
        return True
    else:
        return False
