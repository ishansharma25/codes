class Solution:
    def addOperators(self, num: str, target: int) -> List[str]:
        n = len(num)
        result = []
        
        def helper(i, curr_val, path, pre):
            if i == n:
                if curr_val == target:
                    result.append(path)
                return
            
            for j in range(i, n):
                if num[i] == '0' and j > i:
                    break  # Leading zeros are not allowed
                
                tempstr = num[i:j+1]
                tempval = int(tempstr)
                
                if i == 0:
                    # If at the start, pick the number without any operator
                    helper(j + 1, tempval, tempstr, tempval)
                else:
                    # Addition
                    helper(j + 1, curr_val + tempval, path + '+' + tempstr, tempval)
                    # Subtraction
                    helper(j + 1, curr_val - tempval, path + '-' + tempstr, -tempval)
                    # Multiplication
                    helper(j + 1, curr_val - pre + (pre * tempval), path + '*' + tempstr, pre * tempval)
        
        # Start the helper function
        helper(0, 0, "", 0)
        
        return result
