class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        def issafe(board,row,col,c):
            for i in range(9):
                if(board[i][col]==str(c)):
                    return False
                if(board[row][i]==str(c)):
                    return False
                if(board[3*(row//3)+i//3][3*(col//3)+i%3]==str(c)):#to check sub matrix
                    return False
                
            return True

        def solve(board):

            n=len(board)
            m=len(board[0])
            for i in range(n):
                for j in range(m):
                    if(board[i][j]=='.'):
                        for c in range(1,10):
                            if(issafe(board,i,j,c)):
                                board[i][j]=str(c)
                                if(solve(board)):
                                    return True
                                else:
                                    board[i][j] = '.'
                        return False
            return True
        solve(board)
                                


            
        
