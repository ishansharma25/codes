class Solution:
    def preToPost(self, pre_exp):
        s=[]
        exp = list(pre_exp) 
        exp.reverse()
        
        for i in range(len(exp)):
            if(exp[i]=='^' or exp[i]=='*' or exp[i]=='/' or exp[i]=='+'or exp[i]=='-' or exp[i]=='%'):
                ans=""
                a=s.pop()
                b=s.pop()
                ans=a+b+exp[i]
                s.append(ans)
            else:
                s.append(exp[i])
        return s.pop()
