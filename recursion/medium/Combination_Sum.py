class Solution:

    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        l=[]
        ans=[]
        def pick(target,i):
            if(i==len(candidates)):
                if(target==0):
                    ans.append(l[:])
                return
            if(candidates[i]<=target):
                l.append(candidates[i])
                pick(target-candidates[i],i)
                l.pop()
            pick(target,i+1)
        pick(target,0)
        return ans
