class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        sol=[]
        def issafe(l,n,i,j):
            for row in range(i):
                if(l[row][j]==1):
                    return False
            row=i
            col=j
            #left diagonal check
            while(row>=0 and col>=0):
                if(l[row][col]==1):
                    return False
                row-=1
                col-=1

            row=i
            col=j
        
            #right diagonal check
            while(row>=0 and col<n):
                if(l[row][col]==1):
                    return False
                row-=1
                col+=1
            return True
            
        def nqueen(l, n, row):
            if row == n:
                solution = []
                for i in range(n):
                    row_str = ""
                    for j in range(n):
                        if l[i][j] == 1:
                            row_str += "Q"
                        else:
                            row_str += "."
                    solution.append(row_str)
                sol.append(solution)
                return
            for col in range(n):
                if issafe(l, n, row, col):
                    l[row][col] = 1
                    nqueen(l, n, row + 1)
                    l[row][col] = 0  # Backtrack

        l = []
        for _ in range(n):
            row = []
            for _ in range(n):
                row.append(0)
            l.append(row)
            
        nqueen(l,n,0)
        return sol

'''
        def nqueen(l,n,i):
            if(i>=n):
                return True
            for j in range(n):
                if(issafe(l,n,i,j)):
                    l[i][j]=1
                    if(nqueen(l,n,i+1)):
                        return True
                    l[i][j]=0    #backtracking
            return False
'''
