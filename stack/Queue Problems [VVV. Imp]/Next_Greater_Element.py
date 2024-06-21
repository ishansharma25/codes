class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
     
        ans=[]
        greater={}
        for i in range(len(nums2)):
            while(ans and ans[-1]<nums2[i]):
                greater[ans.pop()] = nums2[i]
            ans.append(nums2[i])
        while ans:
            greater[ans.pop()] = -1
        result = []
        for num in nums1:
            result.append(greater.get(num, -1))
        
        return result
