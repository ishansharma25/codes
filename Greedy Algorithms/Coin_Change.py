class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        c=0
        s=[]
        coins.sort()
        if(amount==0):
            return 0
        for i in range(len(coins)-1,-1,-1):  
            while(coins[i]<=amount):
                print(coins[i])
                amount=amount-coins[i]
                c=c+1
                s.append(coins[i])
        if(amount!=0):
            return -1
        return c
