class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        n=len(nums)
        ans=[]
        sub=1<<n
        for i in range(sub):
            l=[]
            for j in range(n):
                if(i&(1<<j)):
                    l.append(nums[j])
            ans.append(l)
        return ans
