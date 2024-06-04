#User function Template for python3
class Solution:
    def twoOddNum(self, Arr, N):
        ans=0
        for i in Arr:
            ans=ans^i
        right=(ans&(ans-1))^ans
        b1=0
        b2=0
        for i in Arr:
            if(i&right):
                b1=b1^i
            else:
                b2=b2^i

        l = [b2, b1]
        l.sort(reverse=True)

        
        
        return l
