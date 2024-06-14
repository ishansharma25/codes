
class Stack:
    items: list

    def __init__(self) -> None:

        self.items = []

    def pop(self) -> Any:

        return self.items.pop()

    def push(self, x: Any) -> None:

        self.items.append(x)

    def is_empty(self):
        return len(self.items) == 0

    def peek(self):
        return self.items[-1]


class MyQueue:
    s1: Stack
    s2: Stack

    def __init__(self):
        self.s1=Stack()
        self.s2=Stack()

    def push(self, x: int) -> None:
        while(self.s1.is_empty()==False):
            item=self.s1.pop()
            self.s2.push(item)
        self.s1.push(x)
        while(self.s2.is_empty()==False):
            item=self.s2.pop()
            self.s1.push(item)

        

    def pop(self) -> int:
        if(self.s1.is_empty()==False):
            return self.s1.pop()
        

    def peek(self) -> int:
        item = self.s1.pop()
        self.s1.push(item)
        return item
        

    def empty(self) -> bool:
        return self.s1.is_empty()
