def graphColoring(graph, k, V):
    color = [-1] * V  # Initialize colors for all vertices as -1
    
    def isSafe(vertex, c):
        for i in range(V):
            if graph[vertex][i] == 1 and color[i] == c:
                return False
        return True
    
    def helper(i):
        if i == V:
            return True  # All vertices are colored
        
        for j in range(k):
            if isSafe(i, j):
                color[i] = j
                if helper(i + 1):
                    return True
                color[i] = -1  # Backtrack
                
        return False
    
    if helper(0):

        return True
    else:

        return False
