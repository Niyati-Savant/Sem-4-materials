from tkinter import * 
from tkinter import ttk 

# Initialising the window 
form_window = Tk() 
form_window.geometry("600x900") 
form_window.title("Industrial Visit Form") 
form_window.configure(bg="light blue")

heading = Label(text = "Python Form", bg = "yellow") 
heading.pack() 

# Saving details in files 
def register(): 
    fname_info = fname.get() 
    lname_info = lname.get() 
    age_info = age.get() 
    gender_info = gender.get() 
    depart_info = department.get()
    location_info = location.get() 
    with open("TripDetails.txt","a") as f: 
        f.write(f"{fname_info}\t {lname_info}\t {age_info}\t {gender_info}\t {depart_info}\t  {location_info}\n ")   
        print(f"User {fname_info} has been registered successfully")  
# Defining Labels 
fname_text = Label(text = "First Name: ",) 
lname_text = Label(text = "Last name: ",) 
age_text = Label(text = "Age",) 
gender_text = Label(text = "Gender",) 
department_text = Label(text = "Choose your Deprtment",) 
location_text = Label(text = "Prefered city",) 

# Defining Variables 
fname = StringVar() 
lname = StringVar() 
age = StringVar() 
gender = StringVar() 
options = ["Male","Female","Other"] 
department = StringVar() 
location=StringVar()
places=("Goa","Gujarat","Assam")
#Text Areas
fname_entry = Entry(textvariable = fname, width="30") 
lname_entry = Entry(textvariable = lname, width ="30") 
#Spinbox 
age_entry =Spinbox(form_window, from_=0, to = 30) 
# Optionmenu 
gender_entry = OptionMenu(form_window, gender, *options) 
#Combobox 
department_entry = ttk.Combobox(form_window, width = 20) 
department_entry['values'] = ('Comps', 'AIDS','Chemical','IT') 
#Radiobutton 
i=0
for place in places:
    location_entry = Radiobutton(form_window, text =place,value=place, variable=location)  
    location_entry.place(x = 220 +i , y = 600)
    i =i+100
#Submit Button 
submit = Button(form_window, text = "Submit" , command = register) 
#Placing the Components 
fname_text.place(x = 40, y = 100) 
lname_text.place(x = 40, y = 200)
age_text.place(x = 40, y = 300) 
gender_text.place(x = 40, y = 400) 
department_text.place(x = 40, y = 500) 
location_text.place(x = 40, y = 600) 
fname_entry.place(x = 350, y = 100) 
lname_entry.place(x = 350, y = 200) 
age_entry.place(x = 350, y = 300) 
gender_entry.place(x = 350, y = 400) 
department_entry.place(x = 350, y = 500) 
submit.place(x = 300, y = 750) 
form_window.mainloop()