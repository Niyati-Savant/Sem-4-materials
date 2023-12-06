#Sets
'''set1={}
set2={}
set1=set(input("Enter first set: "))
print(set1)
set2=set(input("Enter second set: "))
print(set2)
i=1
print("1. Intersection of Sets \n2. Union of Sets")
print("3. Set difference of Sets \n4. Symmetric difference of Sets")
while i<=4:
    choice=int(input("Enter choice: "))
    if choice==1:
        print(f"set1 U set2 :{set1 & set2}")
        print()		
    elif choice==2:
        print(f"set1 ∩ set2 {set1 | set2}")
        print()
    elif choice==3:
        print(f"set1 - set2 {set1 - set2}")
        print()
    elif choice==4:
        print(f"set1 Δ set2 {set1 ^ set2}")
        print()
    else:
        print("No option")
        break'''

a={}
b={}
num_a=int(input("Enter total number of elements for a: "))
for i in range(num_a):
    k_a=input("Enter key: ")
    val_a=input("Enter value: ")
    a.update({k_a:val_a})
print(f"Dictionary a is {a}")

num_b=int(input("Enter total number of elements for b: "))
for i in range(num_b):
    k_b=input("Enter key: ")
    val_b=input("Enter value: ")
    b.update({k_b:val_b})
print(f"Dictionaryb is {b}")

print(f"Sorting first Dictionary as per key:",sorted(a.items()))
print(f"Sorting second Dictionary as per key:",sorted(b.items()))

a.update(b)
print("Concatinationg both Dictionaries: ",a)