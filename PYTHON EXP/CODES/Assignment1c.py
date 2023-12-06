''' 3.	Python program to implement Queue data structure
create class Queue with following functions.
●	Insert an element
●	Remove an element
●	Search an element
●	Display queue
'''
class Queue:
    def __init__(self):
        self.items = []
        
    def display(self):
        print(self.items)
    
    def enqueue(self, item):
        self.items.append(item)
        
    def dequeue(self):
        self.items.pop(0)
    
    def search(self,x):
        if x in self.items:
            print(f"Element {x} is present at index {self.items.index(x)}")
        else:
            print("Not Present")

print("Initial Queue:")
queue = Queue()
queue.display()

print("After adding a few elements")
queue.enqueue("Jan")
queue.enqueue("Feb")
queue.enqueue("Mar")
queue.enqueue("Apr")
queue.display()

print("After poping the first element")
queue.dequeue()
queue.display()
print("To search an element")
x=input("Which element do you want to search?")
queue.search(x)

