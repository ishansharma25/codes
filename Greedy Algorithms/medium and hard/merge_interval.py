class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        n=len(intervals)
        i=0
        r=[]
        if(n==1):
            return intervals
        intervals.sort(key=lambda x: x[0])
        cur=intervals[0]
        while(i<n):
            if(intervals[i][0]>cur[1]):
                r.append(cur)
                cur=intervals[i]
            else:
                cur[1]=max(intervals[i][1],cur[1])
            i+=1
        r.append(cur)
        return r

