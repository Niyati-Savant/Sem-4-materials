'''class Student:
    stu_count = 0
    def __init__(self):
        self.r_no = input("Enter the Student roll number : ")
        self.name = input("Enter the name : ")
        self.marks = input("Enter the marks : ")

    def Fail(Exception):
        """Student scored less marks Faill!!!!"""

    @classmethod
    def set_stu_count(self):
        while 1:
            try:
                self.stu_count = int(input('Enter the total number of Students :'))
                return self.stu_count
            except:
                print("Invalid input!!")
                continue
    
n = Student.set_stu_count()
a = []
print("Enter the Details of Students:")

for i in range(0, n):
 stu = Student()
 a.append(stu)
print("Details of Students are:")
print("Roll No.\tName\tMarks")

for i in range(0, n):
 print(f"{a[i].r_no} \t\t {a[i].name} \t {a[i].marks}")
print("Details after checking grades:")

for i in range(0, n):
    try:
        if (int(a[i].marks) < 40):
            raise Fail
    except:
        print(f"{a[i].r_no} \t\t {a[i].name} \t F")
    else:
        print(f"{a[i].r_no} \t\t {a[i].name} \t {a[i].marks}")


#CODE 6.2
import os
def print_directories(directory_list):
    #function to print directories in a specific tabular format
    i = 0
    print("\nSr. No. \t Directory") 
    for directory in directory_list: 
        print(i, "\t\t", directory)
        i += 1 

# To get the path where the current notebook is situated path 
path= os.getcwd()
print(f"The current working directory is: {path}")

# Directories before creation of a file dir_list 
dir_list= os.listdir(path)
print("\n List of directories and files before creation:") 
print_directories(dir_list)

# Creation of file
with open("my_file.txt", 'w') as f: 
    f.write("This is my_file.txt\n") 
    for i in range(10):
        f.write(f"Line number {i + 1}. \n")

# Directories after creation of a file dir_list 
dir_list= os.listdir(path)
print("\nList of directories and files before creation:")
print_directories(dir_list) 
def print_details_of_file(file_content): 
   # function to find details of the file
 
    line_count, word_count, char_count = 0, 0, 0
    
    # To find no of lines line_list 
    line_list = file_content.split("\n") 
    line_count = len(line_list)

    # To find no of words 
    for line in line_list: 
        word_list = line.split() 
        word_count += len(word_list)
    # To find number of chars
    char_count = len(file_content)
    
    print("The file contents are :\n" + f"\n{file_content}") 
    print(f"Line Count :\t {line_count}") 
    print(f"Word Count :\t {word_count}") 
    print(f"Char Count :\t {char_count}")

with open("my_file.txt", 'r') as f: 
    file_content = f.read() 
    print_details_of_file(file_content)

# CODE 6.3
class Customer:
    def __init__(self, ID, name, mobile_num): 
        self.ID = ID 
        self.name = name
        self.mobile_num = mobile_num
    
    def add_content_to_file(self):
    # Creation of file and append
        with open("customer_details.txt", 'a') as f:
            f.write(f"{self.ID}, {self.name}, {self.mobile_num}\n")
    
    @classmethod
    def print_content_of_file(cls):
        with open("customer_details.txt", 'r') as f: 
            file_content = f.read()
        print("\nThe file content:\n" + ("-" * 30) + f"\n {file_content}" + ("-" *30))

n = int(input('Enter Number of Customers below:-\n'))
for i in range(n) :
    customer_name = input('\nEnter customer name: ') 
    customer_number = input('Enter customer number: ')
    # Creating n Customer Instances
    customer_instance = Customer(i + 1, customer_name, customer_number) 
    # Appending content to file 
    customer_instance.add_content_to_file()

# Print final content of the file
Customer.print_content_of_file()'''

#6.4
import os
current_dir=os.getcwd()
print(f"Current working directory is: {current_dir}")
# create a directory using mkdir()
os.mkdir("Python_trial")
print("Directories after adding directory:")
print(os.listdir(current_dir))

# create a directory recursively using makedirs()
os.makedirs("Python_trial/Exp1/PartA/A1")
print("Directories after recursively adding directory:")
print(os.listdir(current_dir))

# remove a directory using rmdir()
os.rmdir("Python_trial/Exp1/PartA/A1")
print("Directories after removing directory:")
print(os.listdir(current_dir))

# change the current directory using chdir()
os.chdir(r"C:\\Engineering\\2nd Year\\Sem 4\\AOA")
new_dir= os.getcwd()
print(f"The current working directory is: {new_dir}")
