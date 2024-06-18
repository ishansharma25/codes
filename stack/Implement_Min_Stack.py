'''
class MinStack:
    
    def __init__(self):
        self.minstack=[]
        self.x_min=float(inf)
        
    def push(self, val: int) -> None:
        if(len(self.minstack)==0):
            self.x_min=val
        else:
            self.x_min=min(self.minstack[-1][1],val)
        self.minstack.append((val,self.x_min))


    def pop(self) -> None:
        return self.minstack.pop()
        

    def top(self) -> int:
        return self.minstack[-1][0]
        

    def getMin(self) -> int:
        return self.minstack[-1][1]
'''
class MinStack:

    def __init__(self):
        self.minstack=[]
        self.mini=float(inf)
        

    def push(self, val: int) -> None:
        if(len(self.minstack)==0):
            self.minstack.append(val)
            self.mini=val
        else:
            if(val<self.mini):
                self.minstack.append(2*val-self.mini)
                self.mini=val
            else:
                self.minstack.append(val)

    def pop(self) -> None:
        s=self.minstack.pop()
        if(s<self.mini):
            self.mini=2*self.mini-s
        return s   

    def top(self) -> int:
        s=self.minstack.pop()
        if(s<self.mini):
            s = self.mini
        return s

        

    def getMin(self) -> int:
        return self.mini
        

