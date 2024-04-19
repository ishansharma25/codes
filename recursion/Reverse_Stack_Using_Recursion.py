from typing import List

def reverse(stack,temp):
    if len(stack)==0:
        stack.append(temp)
        return stack
    else:
        temp1=stack.pop()
        reverse(stack,temp)
        stack.append(temp1)




def reverseStack(stack: List[int]) -> None:
    if len(stack)!=0:
        temp=stack.pop()
        reverseStack(stack)
        reverse(stack,temp)
    return stack
