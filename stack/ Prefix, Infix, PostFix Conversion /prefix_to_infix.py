class Solution:
    def preToInfix(self, pre_exp):
        s=[]
        exp = list(pre_exp) 
        exp.reverse()
        
        for i in range(len(exp)):
            if(exp[i]=='^' or exp[i]=='*' or exp[i]=='/' or exp[i]=='+'or exp[i]=='-' or exp[i]=='%'):
                ans=""
                a=s.pop()
                b=s.pop()
                ans='('+a+exp[i]+b+')'
                s.append(ans)
            else:
                s.append(exp[i])
        return s.pop()
                
