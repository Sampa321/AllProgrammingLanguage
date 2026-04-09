

'''class car:
    def color(self):
        print("it is a red color")
    def price(self):
        print("10 lakhs")
a=car()
a.color()
a.price()'''

#CREATE A STUDENT CLASS WITH PROPERTIES(NBAME,ROLL,COLLEGE,STREAM,SEMESTER) CREATE FIVE DIFFERENT OBJECT FOR DIFFERENT  STUDENT AND PRINT THEIR INFORMATION
'''class student:
    def __init__(self,name,roll,college,stream,semester):
        self.name=name
        self.roll=roll
        self.college=college
        self.stream=stream
        self.semester=semester
    def info(self):
        print(f"{self.name},{self.roll},{self.college},{self.stream},{self.semester}")
a=student("sampa",313,"svu","btech cse",2)
b=student("shreya",312,"svu","btech cse",2)
c=student("sangita",311,"svu","btech cse",2)
d=student("shruti",310,"svu","btech cse",2)
e=student("satarupa",315,"svu","btech cse",2)
a.info()
b.info()
c.info()
d.info()
e.info()'''

'''class house:
    def color(self):
        print("it is red color")
    def size(self):
        print("4 bhk flat")
class house1(house):
    def price(self):
        print("40 lakhs")
h=house()
h.color()
h.size()
h1=house1()
h1.color()
h1.size()
h1.price()'''

'''OPERATOR OVERRIDING:IS A SITUATION WHEN BASE CLASS METHOD IS SIMILAR TO CHILD CLASS METHOD.
WE CAN CALL BASE CLASS METHOD USING SUPER() KEYWORD.'''
'''class car:
    def __init__(self):
        print("This is a car class")
class suzuki(car):
    def __init__(self):
        super().__init__()
        print("This is a suzuki class")
class bmw(suzuki):
    def __init__(self):
        super().__init__()
s=bmw()'''

'''class car:
    def color(self):
        print("This is red color")
    def price(self):
        print("25 lakhs")
class bmw(car):
    def insurence(self):
        print("this is 10 years insurence")
a=bmw()
a.color()
a.price()
a.insurence()'''

#CREATE A PERSON CLASS WITH PROPERTIES(NBAME,AGE,OCCUPATION) CREATE FIVE DIFFERENT OBJECT FOR DIFFERENT  PERSON AND PRINT THEIR INFORMATION
# class person:
#     def __init__(self,name,age,occ):
#         self.name=name
#         self.age=age
#         self.occ=occ
#     def info(self):
#         print(f"{self.name},{self.age},{self.occ}")
# a=person("sampa",18,"student")
# b=person("sandip",26,"teacher")
# c=person("arpita",18,"student")
# a.info()
# b.info()
# c.info()
