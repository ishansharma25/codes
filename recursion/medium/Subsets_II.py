

class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        l=[]
        ans=[]
        def sub(i,l):
            if(i==len(nums)):
                ans.append(l.copy())
                return
            #l.append(nums[i])
            sub(i+1,l+[nums[i]])
            #l.pop()
            while(i+1<len(nums) and nums[i]==nums[i+1]):
                i=i+1
            sub(i+1,l)
        sub(0,l)
        return ans 
