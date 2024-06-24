





class Solution:
    def count_NGEs(self, N, arr, queries, indices):
        j=0
        s=[]
        c=0
        for i in range(queries):
            p=indices[i]
            c=0
            j=p+1
            while(j<N):
                if(arr[p]<arr[j]):
                    c+=1
                j=j+1
            s.append(c)
        return s
