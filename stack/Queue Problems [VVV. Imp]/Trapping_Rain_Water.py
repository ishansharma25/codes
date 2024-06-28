class Solution:
    def trap(self, height: List[int]) -> int:

        n=len(height)
        res=0
        maxl=0
        maxr=0
        l=0
        r=n-1

        while(l<=r):
            if(height[l]<=height[r]):
                if(height[l]>=maxl):
                    maxl=height[l]
                else:
                    res+=maxl-height[l]
                l+=1
            else:
                if(height[r]>=maxr):
                    maxr=height[r]
                else:
                    res+=maxr-height[r]
                r-=1
        return res

'''-----------------better-------------
class Solution:
    def trap(self, height: List[int]) -> int:
        n=len(height)
        res=0
        maxl=[0]*n
        maxr=[0]*n
        maxl[0]=height[0]
        for i in range(1,n):
            maxl[i]=max(maxl[i-1],height[i])
        maxr[n-1]=height[n-1]
        for i in range(n-2,-1,-1):
            maxr[i]=max(maxr[i+1],height[i])
        for i in range(n):
            res+=min(maxr[i],maxl[i])-height[i]
        return res
'''
'''
class Solution:
    def trap(self, height: List[int]) -> int:
        n=len(height)
        res=0
        for i in range(n):
            j=i
            maxl=0
            maxr=0
            while(j>=0):
                
                maxl=max(maxl,height[j])
             
                j-=1
            j=i
            while(j<n):
                                
                maxr=max(maxr,height[j])
              
                j+=1
           
            res+=min(maxr,maxl)-height[i]
        
            
        return res
'''
        
