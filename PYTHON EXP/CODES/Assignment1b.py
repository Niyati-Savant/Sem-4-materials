'''  2.	Python program to implement Stack data structure
create class Stack with following functions.
●	Push an element
●	Pop an element
●	Top of Stack
●	Search an element
●	Display stack
create instance and perform all operations.
'''
class Stack:
    def __init__(self):
        self.items=[]
    def push(self,item):
        self.items.append(item)
    def pop(self):
        self.items.pop()
    def peek(self):
        top=self.items[-1]
        print(f"The top element is {top}")
    def disp(self):
        print(self.items)
    def search(self,x):
        if x in self.items:
            print(f"Element {x} is present at index {self.items.index(x) -1}")
        else:
            print("Not Present")

stack =Stack()
print('Initial Stack')
stack.disp()

print('After adding few elements')
stack.push("Mon")
stack.push("Tue")
stack.push("Wed")
stack.push("Thu")
stack.disp()
 
print('Last element popped from stack:')
stack.pop()
stack.disp()
 
print('Peek Function:')
stack.peek()

print('Search Sun:')
stack.search("Sun")

print('Search Wed:')
stack.search("Wed")
