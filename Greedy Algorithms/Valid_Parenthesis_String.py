class Solution:
    def checkValidString(self, s: str) -> bool:
        lo = 0  # minimum number of open brackets '('
        hi = 0  # maximum number of open brackets '('
        
        for char in s:
            if char == '(':
                lo += 1
                hi += 1
            elif char == ')':
                lo = max(lo - 1, 0)
                hi -= 1
            elif char == '*':
                lo = max(lo - 1, 0)  # '*' can act as ')'
                hi += 1  # '*' can act as '('
            
            if hi < 0:  # If hi is negative, too many closing brackets
                return False
        
        return lo == 0  # If lo is 0, all open brackets can be matched

        

        
