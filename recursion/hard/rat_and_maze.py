class Solution:
    def findPath(self, m, n):
        def issafe(m,n,x,y):
            if(x>=0 and y>=0 and x<n and y<n and m[x][y]==1):
                return True
            return False
        def helper(s,st,m,n,i,j):
            if(issafe(m,n,i,j)==False):
                return
            if(i==(n-1)and j==n-1):
                s.append(st)
                return
            
            m[i][j]=-1
            if(issafe(m,n,i+1,j)):
                helper(s,st+"D",m,n,i+1,j)
            if(issafe(m,n,i-1,j)):
                helper(s,st+"U",m,n,i-1,j)
            if(issafe(m,n,i,j-1)):
                helper(s,st+"L",m,n,i,j-1)
            if(issafe(m,n,i,j+1)):
                helper(s,st+"R",m,n,i,j+1)
            m[i][j]=1
            
        st=""  
        s=[]
        helper(s,st,m,n,0,0)
        return s
