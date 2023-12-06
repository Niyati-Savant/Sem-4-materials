#Python program to overload greater than ( > ) operator to make it act on user defined class objects
'''class C:
    def __init__(self,power):
        self.Cpower=power #5836
    def __comp__(self,other):
        return self.Cpower > other.Ppower

class Python:
    def __init__(self,power):
        self.Ppower=power

obj1=C(5473)
obj2=Python(7943)
#ans=obj1.It(obj2)

if(obj1 > obj2):
    print("C class has more power")
else:
    print("Python class has more power")'''

# 4. Python program to demonstrate concept of Interfaces.
from abc import *
class Printer(ABC):
    @abstractmethod
    def printit(self,text):
        pass
    @abstractmethod
    def disconnect(self):
        pass
class IBM(Printer):
    def printit(self,text):
        print(text)
    def disconnect(self):
        print("Printed on IBM")
class HP(Printer):
    def printit(self,text):
        print(text)
    def disconnect(self):
        print("Printed on HP")

user_choice=input("Enter name of printer: ").upper()
classname=globals()[user_choice]
x=classname()
x.printit("Request sent for Printing")
x.disconnect()