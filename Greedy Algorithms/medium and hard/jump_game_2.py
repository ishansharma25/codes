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
        from typing import List

class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0
        
        jumps = 0
        current_end = 0
        farthest = 0
        
        for i in range(len(nums) - 1):
            farthest = max(farthest, i + nums[i])
            
            if i == current_end:
                jumps += 1
                current_end = farthest
            
            if current_end >= len(nums) - 1:
                break
        
        return jumps
