#DICTIONARY ARE USED TO STORE DATA VALUES IN KEY:VALUE PAIRS.THEY ARE UNORDERED,MUTABLE(CHANGEABLE) & DON'T ALLOW DUPLICATE KEYS.

'''dict={
    "name":"sampa",
    "stream":"btech CSE",
    "group":"b",
    "Roll No":313
}
print(dict.keys())    #all keys are stores
print(dict.values())   #all values are stores
print(dict["name"])    #only print sampa
dict["name"]="mamaon"
print(dict)    #all dict same but sampa changes mamon
dict["sem"]=2    #add sem in a dict
print(dict)   '''

'''null_dict={}
print(null_dict)
print(type(null_dict))
print(len(null_dict))
null_dict["name"]="sampa"
print(null_dict)'''


#NESTED DICTIONARY
'''student={
    "name":"sampa",
    "sub":{
        "math":99,
        "phy":98,
        "chem":97
    }
}
student["sub"].update({"bio":97})
print(student)'''


# print(student)
# print(student["sub"])
# print(student["sub"]["math"])
# print(student.keys())
# print(list(student.keys()))
# print(student.values())
# print(list(student.values()))
# print(len(student))
# print(len(student.keys()))
# print(len(list(student.keys())))
'''print(student.items())
print(list(student.items()))'''
'''print(student["name"])
print(student.get("name"))'''
'''print(student.get("name1"))
print(student["name1"]) '''  #error

'''student.update({"city":"kolkata"})
print(student)'''
'''new_dict={"city":"kolkata"}
student.update(new_dict)
print(student)'''

'''new_dict={"name":"mamon"}
student.update(new_dict)
print(student)'''

#SET IS THE COLLECTION OF THE UNORDERED ITEMS.EACH ELEMENT IN THE SET MUST BE UNIQUE AND IMMUTABLE.
 
'''set={12,23,34,45,67,12,12,"hello","hello","world","world"}'''
'''print(set)
print(type(set))
print(len(set))''' #7

'''set={}
print(type(set))'''  # it is dictionary
'''null_set=set()
print(type(null_set))''' #it is set

'''set.add(56)   #add one element,it is not possible many elements
print(set)
print(len(set)) '''  #8

'''set.remove(12)
print(set)
print(len(set))'''    #6

'''set.clear()  #empty set
print(set)
print(len(set))'''  # 0

'''set.pop()
set.pop()
set.pop()
print(set)'''  #set does not order so any element is remove in set

'''set1={12,23,34,45}
set2={12,23,76,67}
print(set1.union(set2))
print(set1.intersection(set2))'''

'''practice1: store following word meaning in a python dictionary table:"a piece of furniture","list of facts & figures"
cat:"a small animal"'''
'''dict={
    "cat":"a small animal",
    "table":["a piece of furniture","list of facts & figures"]
}
print(dict)'''

'''practice2:you are given a list of sunjects for student.Assume one classroom is required for 1 subject.
How mwny classroom are needed all students.'''
'''student={"python","java","c++","python","javascript","java","python","java","c++","c"}
print(student)
print(len(student))'''

'''practice3:wap to enter marks of 3 subjects from the user and store them in a dictionary.start with an empty dictionary & 
add one by one.use subject name as key & marks as value. '''
'''dict={}
x=int(input("enter the merks phy:"))
dict.update({"phy":x})
y=int(input("enter the merks math:"))
dict.update({"math":y})
z=int(input("enter the merks chem:"))
dict.update({"chem":z})
print(dict)'''

'''practice4:Figure out a way to store 9 & 9.0 as separate values in the set.(you can take help of built-in data types) '''
'''set={9,9.0,8,8.78}
print(set)

values={
    ("float",9.0),
    ("int",9)
}
print(values)'''