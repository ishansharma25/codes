from typing import List

def genrate(n,s,p):
    if len(p)==n :
        s.append(p)
        return s
    
    if(p[len(p)-1]=='1'):
        genrate(n,s,p+'0')
    elif(p[len(p)-1]=='0'):
        genrate(n,s,p+'1')
        genrate(n,s,p+'0')

def generateString(N: int) -> List[str]:
    s=[]
    genrate(N,s,'0')
    genrate(N,s,'1')
    return s
