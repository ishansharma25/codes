class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        gf=0
        ss=0
        nc=0
        while(gf<len(g) and ss<len(s)):
            if(g[gf]<=s[ss]):
                nc=nc+1
                gf=gf+1
            ss=ss+1
            
        return nc
        
        
