class Solution:

    def genrate(self,n,s,p,i):
        if(len(p)==2*n):
            s.append(p)
            return s
        if(i<n):
            self.genrate(n,s,p+'(',i+1)
        if p.count('(') > p.count(')'):
            self.genrate(n,s,p+')',i)

    def generateParenthesis(self, n: int) -> List[str]:
        self.s=[]
        self.i=1
        self.genrate(n,self.s,'(',self.i)
 
        return self.s
