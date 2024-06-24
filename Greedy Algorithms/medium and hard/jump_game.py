class Solution:
    def canJump(self, nums: List[int]) -> bool:
        max_len=0
        for i in range(len(nums)):
            
            if(i>max_len):
                return False
            if(i<=max_len):
                max_len=max(max_len,i+nums[i])
        return True
