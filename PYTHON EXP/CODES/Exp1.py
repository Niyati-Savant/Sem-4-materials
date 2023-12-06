import array as arr
print("Code to read and display the array elements")
n=int(input("Enter the number of elements"))
a=arr.array('i',[])
b=arr.array('i',[])
for index in range(0,n):
    x=int(input(f"Enter the element {index+1} : "))
    a.append(x)

print("The elements in  the array are:")
for index in range(0,n):
    print(a[index])

flag=False
for index in range(0,n):
    for j in range(2,a[index]):
        if (a[index]%j==0):
            b.append(a[index])
            break
print("The elements in the array after removing prime no. are:")
for index in range(0,len(b)):
    print(b[index])
