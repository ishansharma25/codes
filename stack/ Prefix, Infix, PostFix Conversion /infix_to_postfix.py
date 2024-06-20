
class Solution:
    
    
    
    #Function to convert an infix expression to a postfix expression.
    def InfixtoPostfix(self, exp):
        
        s=[]
        d={'^':5,'*':4,'/':4,'+':3,'-':3}
        ans=""
        for i in range(len(exp)):
            if(exp[i].isalnum()):
                ans+=exp[i]
            elif(exp[i]=='('):
                s.append(exp[i])
            elif(exp[i]==')'):
                
                while(s and s[-1]!='('):
                    ans+=s.pop()
                s.pop()
            else:
                while (s and s[-1] in d and d[s[-1]] >= d[exp[i]] ):
                    ans+=s.pop()
                s.append(exp[i])
                
        while s:
            ans+=s.pop()
        return ans
