class Solution:
    def myAtoi(self, s: str) -> int:
        def na(i,s,result):
            
            if(i==len(s)):
                print(result)
                return result
            if(s[i].isdigit()):
                print(i)
                result=result*10+(int(s[i]))
                return na(i+1,s,result)
            else:
                return result


        n=len(s)
        sign=1
        result=0
        if(s==""):
            return 0
        for j in range(n):
            if(s[j]==' '):
                continue
            else:
                break
        if s[j] == '-':
            sign = -1
            j=j+1      
        elif s[j] == '+':
            sign=1
            j=j+1
  
        result=na(j,s,result)
        
        if(2**31<result or(result==2**31)):
            if(sign!=-1):
                return 2**31-1
            else:
                return -2**31
        return result*sign




'''
class Solution:
    def myAtoi(self, s: str) -> int:
        n=len(s)
        j=0
        sign=1
        result=0
        if(s==""):
            return 0

        
        for j in range(n):
            if(s[j]==' '):
                continue
            else:
                break

        if s[j] == '-':
            sign = -1
            j=j+1
        

        elif s[j] == '+':
            sign=1
            j=j+1

        for i in range(j,n):

            if(s[i].isdigit()):


                result=result*10+(int(s[i])-int('0'))

            else:
                break

        if(2**31<result or(result==2**31)):
            if(sign!=-1):
                return 2**31-1
            else:
                return -2**31
        return result*sign

        


'''

        
