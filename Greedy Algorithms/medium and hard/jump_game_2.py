'''class Solution:
    def jump(self, nums: List[int]) -> int:
        def helper(i,jump):
            if(i>=len(nums)-1):
                return jump
            mini=2**31
            for j in range(1,nums[i]+1):
                mini=min(mini,helper(i+j,jump+1))
            return mini
        return helper(0,0)
'''
        
