#3.5
'''def sq(x):
    return (x*x)
def cube(x):
    return (x**3)   
def decor_add4(func,a):
    return (func(a)+4)
def decor_mul2(func,b):
    return (func(b)*2)

num=int(input("Enter a number: "))
print(f"The Square of {num} is {sq(num)}")
print(f"The Cube of {num} is {cube(num)}")
print(f"On incrementing the square {sq(num)} by 4, we get {decor_add4(sq,num)}")
print(f"On multiplying the square {sq(num)} by 2, we get {decor_mul2(sq,num)}")
print(f"On incrementing the cube {cube(num)} by 4, we get {decor_add4(cube,num)}")
print(f"On multiplying the cube {cube(num)} by 2, we get {decor_mul2(cube,num)}")'''

#3.6
import operations
user_str=input("Enter the elements with space : ")
strlist=user_str.split(" ")
int_list=list(map(int,strlist))
print("Enter 1 for summation of all elements \nEnter 2 to get product of all elements \nEnter 3 for summation of even elements \nEnter 4 for adding a new element \n")
while(1):
    choice=int(input("Enter choice: "))
    if(choice==1):
        print("Summation of all elements")
        operations.summation(int_list)
    elif(choice==2):
        print("Product of all elements")
        operations.multiplication(int_list)
    elif(choice==3):
        print("Sum of even elements")
        operations.sumofeven(int_list)
    elif(choice==4):
        x=int(input("Enter a number: "))
        print("After adding new element")
        print(operations.addnewelem(int_list,x))
    else:
        print("Wrong option.Taking exit")
        break