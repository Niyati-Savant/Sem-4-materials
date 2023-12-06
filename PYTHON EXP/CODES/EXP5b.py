class Employee:
    def __init__(self,eid): #constructer to set id
        self.id=eid

    #instance methods   
    def set_name(self,name):
        self.name=name
    def get_name(self):
        print(f"The Employee name is {self.name}")
    def get_id(self):
        print(f"The Employee id is {self.id}")  

class Student:
    def __init__(self,college): #constructer to set college
        self.college=college

    def get_college(self):
        print(f"The College name is {self.college}")

class Intern(Employee,Student):
    def __init__(self,eid,college,period):
        super().__init__(eid)
        super().__init__(college)
        self.period=period    
    def set_details(self,name):
        self.name=name  
    def get_details(self):
        print("These are the Intern Details")
        
i1=Intern(eid=105,college="Thadomal",period=6)
i1.set_name("Niyati")
i1.get_details()
i1.get_name()
i1.get_id()
i1.get_college()



