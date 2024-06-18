class Solution:
    def isValid(self, s: str) -> bool:
        p=[]
        for i in range(len(s)):
            if(len(p)==0):
                p.append(s[i])
             
            elif(p[-1]=='(' and s[i]==')' or p[-1]=='{' and s[i]=='}' or p[-1]=='[' and s[i]==']'):
                
                p.pop()
           
            else:
                p.append(s[i])
        if(len(p)==0):
            return True
        
        return False

            
