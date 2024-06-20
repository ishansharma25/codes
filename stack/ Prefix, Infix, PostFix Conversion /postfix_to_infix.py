class Solution:
    def postToInfix(self, exp):
        s=[]
        #exp = list(post_exp) 
        #exp.reverse()
        
        for i in range(len(exp)):
            if(exp[i]=='^' or exp[i]=='*' or exp[i]=='/' or exp[i]=='+'or exp[i]=='-' or exp[i]=='%'):
                ans=""
                a=s.pop()
                b=s.pop()
                ans='('+b+exp[i]+a+')'
                s.append(ans)
            else:
                s.append(exp[i])
        return s.pop()
