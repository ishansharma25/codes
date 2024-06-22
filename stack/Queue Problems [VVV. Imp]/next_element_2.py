class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        s=[]
        i=0
        n = len(nums)
        d=[-1]*n
        while(i<2*n):
            p=nums[i%n]
            while(s and nums[s[-1]]<p):
                d[s.pop()]=p
            if i<n:
                s.append(i%n)
            i+=1
        return d
