'''Python program to use deque class from collections  with following functions.
●	Add element at Front
●	Add element at Rear
●	Remove element from Front
●	Remove element from Rear
●	Search for an element '''

from collections import deque

# Create a deque
d = deque()
print("Initial Queue:")
print(d)
print("After Adding a few elements")
d.extend(["March","April"]) 
d.extendleft(["Feb","June"])
print(d)

print("Adding element at Front")
d.appendleft("Jan")      
print(d) 

print("Adding element at Rear")
d.append("May")          
print(d) 

print("Removing element at Rear")
d.pop()              
print(d)  

print("Removing element at Front")
d.popleft()          
print(d)  

x=input("Enter the element you want to search: ")
if x in d:
    print(f"Element {x} is present at index {d.index(x)+1}")
else:
    print("Not Present")

