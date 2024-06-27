class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        n=len(intervals)
        start=newInterval[0]
        end=newInterval[1]
        i=0
        print(start,end)
        r=[]
        while i < len(intervals) and intervals[i][1] < newInterval[0]:
                r.append(intervals[i])
                i+=1
        while(i<n and intervals[i][0] <= newInterval[1]):
            newInterval[0]=min(newInterval[0],intervals[i][0])
            newInterval[1]=max(newInterval[1],intervals[i][1])
  
            i+=1
        r.append(newInterval)
        while i < n:
            r.append(intervals[i])
            i += 1       
                    
        return r

        
