from os import *
from sys import *
from collections import *
from math import *




def sortStack(s):
    if len(s)>1:
        temp=s.pop()
        sortStack(s)
        sorting(s,temp)
    return s


def sorting(s,l):
    if  len(s)==0 or l>s[-1]:
        s.append(l)
    else:
        temp=s.pop()
        sorting(s,l)
        s.append(temp)
