class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        n=len(intervals)
  
        c=0
        i=1
        
        intervals.sort(key=lambda x:x[1])
        cur=intervals[0][1]
        while(i<n):
            if(intervals[i][0]<cur):
                c+=1
            else:
                cur=intervals[i][1]
            i+=1
    
        return c
