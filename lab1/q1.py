class Stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        return self.items.pop() if self.items else None
    def peek(self):
        return self.items[-1] if self.items else None
    def is_empty(self):
        return not self.items
stack1=Stack();
stack2=Stack();
def enqueue(item):
    stack1.push(item)
def dequeue():
    if stack2.is_empty():
        while(stack1.is_empty()!=True):
            stack2.push(stack1.pop())
    return stack2.pop()
enqueue(1)
enqueue(2)
enqueue(3)
print(dequeue())
