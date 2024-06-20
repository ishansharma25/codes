class Solution:
    def postToPre(self, exp):
        s=[]
        #exp = list(post_exp) 
        #exp.reverse()
        
        for i in range(len(exp)):
            if(exp[i]=='^' or exp[i]=='*' or exp[i]=='/' or exp[i]=='+'or exp[i]=='-' or exp[i]=='%'):
                ans=""
                a=s.pop()
                b=s.pop()
                ans=exp[i]+b+a
                s.append(ans)
            else:
                s.append(exp[i])
        return s.pop()
