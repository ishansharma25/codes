class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        d={}
        s=[]
        ans=[]
        for i in range(len(prices)):
            while(s and prices[s[-1]]>=prices[i]):
                d[s.pop()]=prices[i]
            s.append(i)

        while s:
            d[s.pop()]=0

        for i in range(len(prices)):
            p=prices[i]-d[i]
            ans.append(p)
        return ans

        
