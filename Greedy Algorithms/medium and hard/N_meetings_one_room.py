class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        n=len(arr)
        m=len(dep)
        arr.sort()
        dep.sort()
        maxi=float('-inf')
        i=0
        j=0
        c=0
        while(i<n and j<m):
            if(arr[i]<=dep[j]):
                c+=1
                i+=1
            else:
                c-=1
                j+=1
            maxi=max(maxi,c)
        return maxi
