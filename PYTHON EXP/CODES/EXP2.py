import array as arr

print("Code to read and display the array elements")
n=int(input("Enter the number of elements: "))
a=arr.array('i',[])
for index in range(0,n):
    x=int(input(f"Enter the element {index+1} : "))
    a.append(x)

print("The elements in  the array are:")
for index in range(0,n):
    print(a[index])


print("Code to append a new item to end of array")
print(f"Existing array size: {len(a)}")

new_elem=int(input("Enter a new elment "))
a.append(new_elem)
print(f"Array after adding a new item to end  comes of size {len(a)}")
for i in range(len(a)):
    print(a[i])
    

print("Reversing the array elements using Slice Operator:")
print(a[::-1])
    
print("Code to get length in bytes of one array item")
print(f"length in bytes of one array item: {str(a.itemsize)}")


print("Code to append items from another array")
b=arr.array('i',[60,70,80,90,100])
print("The  array elements that will be added to array a:")
for i in range(0,len(b)):
    print(b[i])

for index in range(len(b)):
    a.append(b[index])
print("After appending other array elements:")
for i in range(0,len(a)):
    print(a[i])


print("Code to remove some element from the array: ")

remove_index=int(input("Enter the index from which element is to be removed :"))
a.pop(remove_index)
print("Array elements after removal:")
for i in range(0,len(a)):
    print(a[i])
    

print("Code to add an element at some index")

add_index=int(input("Enter the index at which element is to be added :"))
new_elem=int(input("Enter the element :"))
a.insert(add_index,new_elem)
print("Array after adding new element")
for i in range(0,len(a)):
    print(a[i])

print("Code to convert array to string")
arrTostr = ' '.join([str(elem) for elem in a])
print(f"The converted string :{arrTostr}")

   