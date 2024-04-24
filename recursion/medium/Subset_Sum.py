from sys import *
from collections import *
from math import *

from typing import List

def sub(num,s,l,i):
    if(i==len(num)):
        l.append(s)
        return
    sub(num,s+num[i],l,i+1)
    sub(num,s,l,i+1)

def subsetSum(num: List[int]) -> List[int]:
    l=[]
    sub(num,0,l,0)
    l.sort()
    return l
