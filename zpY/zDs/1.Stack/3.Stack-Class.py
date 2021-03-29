from collections import deque

class MyStack:
    def __init__(self):
        self.container = deque()

    def push(self, value):
        return self.container.append(value)

    def pop(self):
        return self.container.pop()

    def display(self):
        length = len(self.container)
        return self.container[1]

    def peek(self):
        return self.container[-1]



myStack1 = MyStack()

myStack1.push("Numan")
myStack1.push("JS")
myStack1.push("PY")

print(myStack1.display())

print("Peek:- "+myStack1.peek())
