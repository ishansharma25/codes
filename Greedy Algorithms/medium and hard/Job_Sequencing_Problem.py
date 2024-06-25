''' 
class Job:
    
    # Job class which stores profit and deadline.
    
    def __init__(self,profit=0,deadline=0):
        self.profit = profit
        self.deadline = deadline
        self.id = 0
'''        

class Solution:
    
    #Function to find the maximum profit and the number of jobs done.
    def JobScheduling(self,Jobs,n):
        

        Jobs.sort(key=lambda x:x.profit,reverse=True)
        max_d= max(job.deadline for job in Jobs)
        d=[-1]*(max_d+1)
        c=0
        profit_t=0
        for i in Jobs:
            job_id,deadline,p=i.id,i.deadline,i.profit
       
            for j in range(deadline,0,-1):
                if(d[j]==-1):
                    d[j]=job_id
                    c+=1
                    profit_t+=p
                    break
        return(c,profit_t)
