class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        
        def helper(i,j,k):
            if(k==len(word)):
                return True
            if(i<0 or i>=len(board) or j<0 or j>=len(board[0]) or board[i][j]!=word[k]):
                return False

             # Save the current character and mark the cell as visited
            temp = board[i][j]
            board[i][j] = ''
            if(helper(i+1,j,k+1) or helper(i-1,j,k+1) or helper(i,j+1,k+1) or helper(i,j-1,k+1)):
                return True
            # Restore the original character in the board
            board[i][j]=temp
            return False
        for i in range(len(board)):
            for j in range(len(board[0])):
                if(helper(i,j,0)):
                    return True
        return False
        
