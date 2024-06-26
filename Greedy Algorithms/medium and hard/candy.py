import numpy as np
class Solution:
    def candy(self, ratings: List[int]) -> int:
        n=len(ratings)
        if n == 0:
            return 0
        #left=np.ones(n,dtype=int)
        left=[1]*n

        for i in range(1,n):
            if(ratings[i]>ratings[i-1]):
                left[i]=left[i-1]+1
      
        for i in range(n-2,-1,-1):
            if(ratings[i]>ratings[i+1]):
                left[i]=max(left[i],left[i+1]+1)
        return sum(left)   

'''
import numpy as np
class Solution:
    def candy(self, ratings: List[int]) -> int:
        n=len(ratings)
        if n == 0:
            return 0
        left=np.ones(n,dtype=int)

        for i in range(1,n):
            if(ratings[i]>ratings[i-1]):
                left[i]=left[i-1]+1
        right=1
        cur=1
        su=left[-1]
        for i in range(n-2,-1,-1):
            if(ratings[i]>ratings[i+1]):
                cur=right+1
                right=cur
            else:
                cur=1
                right=1

            su=su+max(left[i],cur)
        return su

'''


'''
import numpy as np
class Solution:
    def candy(self, ratings: List[int]) -> int:
        n=len(ratings)
        #left=[0]*n
        #right=[0]*n
        left = np.ones(n, dtype=int)
        right = np.ones(n, dtype=int)
        left[0]=1
        right[n-1]=1
        for i in range(1,n):
            if(ratings[i]>ratings[i-1]):
                left[i]=left[i-1]+1

        for i in range(n-2,-1,-1):
            if(ratings[i]>ratings[i+1]):
                right[i]=right[i+1]+1

        maxi=0
        for i in range(n):
            maxi+=max(left[i],right[i])
        return maxi
      '''  


''' ---------------not working-----------------
import numpy as np
class Solution:
    def candy(self, ratings: List[int]) -> int:
        n=len(ratings)
        if n == 0:
            return 0
        i=1
        su=1
        while(i<n):
            if(ratings[i]==ratings[i-1]):
                su+=1
                i+=1
                continue
            peak=1
            while(i<n and ratings[i]>ratings[i-1]):
                peak+=1
                su+=peak
                i+=1


            if i == n:
                break


            down=1
            while(i<n and ratings[i]<ratings[i-1]):
                down+=1
                su+=down
                i+=1

            if peak > down:
                su -= down
            else:
                su-= peak

            if i < n and ratings[i] == ratings[i - 1]:
                su += 1
                i += 1

        return su+1'''
