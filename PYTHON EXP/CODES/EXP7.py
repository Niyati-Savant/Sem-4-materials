'''from my_packages.Account.Salary import Salary
from my_packages.Employee.Qualification import Qualification
from my_packages.Employee.Profile import Profile

n=int(input("Enter the number of Employees:"))
employee_list=[]

for emp in range(n):
    print(f"Enter details of Employee {emp+1}:")
    name=input("Enter Name:")
    age=input("Enter Age :")
    dob=input("Enter Date of Birth :")
    degree=input("Enter Degree:")
    experience=input("Enter Experience:")
    pf=int(input("Enter PF:"))
    basic_pay=int(input("Enter Basic Pay:"))
    hra=int(input("Enter HRA:"))
    print("\n")

    emp_profile=Profile(name,age,dob)
    emp_qualification=Qualification(degree,experience)
    emp_slalry=Salary(pf,basic_pay,hra)

    total_salary=basic_pay + hra - pf

    new_employee=[emp_profile,emp_qualification,emp_slalry,total_salary]
    employee_list.append(new_employee)

print("Name \t Age \t DOB \t Degree \t Exp \t Basic \t HRA \t PF \t SALARY \n")

for emp in employee_list:
    print(emp[0].name,emp[0].age,emp[0].dob,emp[1].degree,emp[1].experience,emp[2].basic,emp[2].hra,emp[2].pf,emp[3],sep=' \t ')


# 7.2-Regular Expression
import re
# Create a string with names of cities in India separated by spaces.
cities = "Mumbai Surat Delhi Chennai Kolkata Hyderabad Bangalore Jaipur Ahmedabad Pune Madras Lucknow"
print("The List of cities:")
print(cities)

# Find all cities ending with "ai"
pattern1 = r"\b\w+ai\b"
matches1 = re.findall(pattern1, cities)
print("Cities ending with 'ai':", matches1)

# Find all cities starting with "Mu" or "Ma"
pattern2 = r"\b[Ma|Mu]\w+\b"
matches2 = re.findall(pattern2, cities)
print("Cities starting with 'Mu' or 'Ma':", matches2)

# Print names of cities with 'u' as second letter and 'a' as second last letter
pattern3 = r"\b\w[u|U]\w*[a|A]\w\b"
matches3 = re.findall(pattern3, cities)
print("Cities with 'u' as second letter and 'a' as second last letter:", matches3)
'''

#7.3
import re
# Open the file and read the phone list
with open("phone_list.txt", "r") as file:
    phone_list = file.readlines()
print("The Phone-Book ")
print(phone_list)

pattern = r"Rao\s+[J|K]\w*\s+\d+"
matches = []
for line in phone_list:
    match = re.search(pattern, line)
    if match:
        matches.append(match.group())
print("Entries with surname as 'Rao' and first name starting with 'J' or 'K':")
for match in matches:
    print(match)
