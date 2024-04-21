class Solution:


    def sub(self,nums,s,n,ans):
        if(n==len(nums)):
            ans.append(s.copy())
            return ans
        self.sub(nums,s,n+1,ans)
        s.append(nums[n])
        self.sub(nums,s,n+1,ans)
        s.pop()

    def subsets(self, nums: List[int]) -> List[List[int]]:
        self.s=[]
        self.ans=[]
        self.sub(nums,self.s,0,self.ans)
        return self.ans



from typing import List

class Solution:

    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = [[]]  # Start with an empty subset
        for num in nums:
            new_subsets = []
            for subset in result:
                new_subsets.append(subset + [num])  # Add the current number to each existing subset
            result.extend(new_subsets)  # Extend the result list with the new subsets
        return result

        
