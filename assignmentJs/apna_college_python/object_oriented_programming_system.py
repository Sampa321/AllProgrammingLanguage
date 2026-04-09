'''class Student:
    name="sampa"
s1=Student()
print(s1.name)'''

'''class car:
    color="red"
    height="5 fit"
car1=car()
print(car1.color,car1.height)'''
 
#__init__function:
'''class Student:
    def __init__(self,name):
        self.name=name
s1=Student("sampa")
print(s1.name)'''

'''class student:
    def __init__(self,name,marks):
        self.name=name  #Data store
        self.marks=marks
        print("adding new student in Database..")
s1=student("sampa",98)
print(s1.name,s1.marks)
s2=student("mamon",54)
print(s2.name,s2.marks)'''

'''class student:
    college_name="ABC college"
    def  __init__(self,name):
        self.name=name
s1=student("sampa")
print(s1.name,"\n",s1.college_name)
s2=student("mamon")
print(s2.name,"\n",s2.college_name)'''

'''class student:
    name="mamon"  #class attr
    def  __init__(self,name):
        self.name=name  #obj attr
s1=student("sampa")
print(s1.name)'''  #obj attr is higher than  class attr

'''CREATE STUDENT CLASS THAT TAKES NAME & MARKS OF 3 SUNJECT AS ARGUMENTS IN CONSTRUCTOR.
THEN CREATE A METHOD TO PRINT THE AVERAGE.'''
class Student:
    def __init___(self,name,phy,chem,math):
        self.name=name
        self.phy-=phy
        self.chem=chem
        self.math=math
        
    def get_avg(self):
        sum=0
        sum=self.phy+self.chem+self.math
        print("hi",self.name,"your avg marks is:",sum/3)
s1=Student("sampa",98,90,99)
s1.get_avg()