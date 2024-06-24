class Solution:
    
    #Function to find the maximum number of meetings that can
    #be performed in a meeting room.
    def maximumMeetings(self,n,start,end):
        s=[]
        c=0

            

        for i in range(n):
            s.append([start[i],end[i]])
    
        s.sort(key=lambda x: x[1])
            
        st=0

        for i in s:
            if(i[0]>st):
                st=i[1]
                c=c+1
        return c
