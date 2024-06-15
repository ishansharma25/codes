class MyStack:
    

    # class StackNode:

    # # Constructor to initialize a node
    # def __init__(self, data):
    #     self.data = data
    #     self.next = None
        
    #Function to push an integer into the stack.
    def __init__(self):
        self.Stack = None

    def push(self, data):
        node=StackNode(data)
        node.next=self.Stack
        self.Stack=node

        # Add code here


    #Function to remove an item from top of the stack.
    def pop(self):
        if not self.Stack: return -1
        data=self.Stack.data
        self.Stack=self.Stack.next
        return data
        # Add code here
