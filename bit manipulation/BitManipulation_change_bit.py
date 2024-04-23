from typing import *
def bitManipulation(num : int, i : int) -> List[int]:
    res = []
    value = num>>i-1

    if value & 1 == 0:
        bit = 0
    else:
        bit = 1
    res.append(bit)
    res.append(num | 1<<i-1)
    res.append(num & ~(1<<i-1))
    return res
