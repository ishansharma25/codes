
def moreSubsequence(n: int, m: int, a: str, b:str) -> str:
    if(len(a)==len(b) and len(set(a))==len(set(b))):
        return a
    
    if(len(set(a))>len(set(b))):
        return a

    if(len(set(a))<len(set(b))):
        return b

    else:
        if(n>m):
            return a
        else:
            return b


def sub(n,p,l,s,i):
    if(i>n-1):
        l.append(s)
        return
    sub(n,p,l,s,i+1)
    sub(n,p,l,s+p[i],i+1)
def moreSubsequence(n: int, m: int, a: str, b:str) -> str:
    if(len(a)==len(b)):
        return a
    
    l1=[]
    l2=[]
    s=""
    sub(n,a,l1,s,0)

    sub(m,b,l2,s,0)

    if len(l1) >= len(l2):

        if len(set(a)) >= len(set(b)):
            return a
        else:
            return b

    if len(l2) > len(l1):
        if len(set(a)) > len(set(b)):
            return a
        else:
            return b




