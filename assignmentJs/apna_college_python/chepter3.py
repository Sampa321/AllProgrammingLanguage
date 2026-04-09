#list:
'''mark=[12,23,45,54,65,67,77,98,89]
print(mark)
print(type(mark))
print(len(mark))
print(mark[3])
print(mark[1:3])
mark[1]=32
print(mark)'''

'''student=["sampa",23.34,18]
print(student)
print(len(student))
print(type(student))
print(type(student[0]))
print(type(student[1]))
print(type(student[2]))
print(student[1])
print(student[2])
print(student[0:2])
print(student[2]+student[1]) #string+int is not possible
student[1]="arpita"
print(student)'''

#list slicpriing:
'''marks=[12,23,34,45,56,76,88,98,87]
print(marks[1:5])
print(marks[1:]) #print(marks[1"len(marks)])
print(marks[:5]) #print(marks[0:5])
print(marks[-5:-2])'''

#List Method:
'''list=[12,77,89,23,34,54,56,98,90]
list.append(11) # add 11 the last  index in the list
print(list)
list.remove(12)  #remove 12
print(list)
list.pop(5)  #remove 5 index(54)
print(list)
list.sort() #11,12,23,34,54,56,77,89,90,98(asscending)
print(list)
list.sort(reverse=True) #98,90,89,77,56,54,34,23,12,11(discending)
print(list)
list.reverse() #11,90,98,56,54,34,23,89,77,12
print(list)
list.insert(3,81) #add 81 in the 3rd index
print(list)'''
 
 #Tuples in python:
'''tup=()
print(type(tup))
tup1=(12,23,34)
print(type(tup1))
tup2=(12,23,34,)
print(type(tup2))
tup3=(12)
print(type(tup3))
tup4=(12.6)
print(type(tup4))
tup5=("12")
print(type(tup5))
tup6=(12,23,34,56,67,87)
print(tup6[2])
print(tup6[4])
print(tup6[2:6])
print(tup6[:6])'''

'''tup=(12,34,56,78,98,78,56,12,12)
print(tup.count(12))
print(tup.index(34))'''

#WAP TO ASK THE USER TO ENTER NAMES OF THEIR 3 FAVOURITE MOVIES AND STORE THEM IN A LIST.
'''movies=[]
mov1=input("enter the 1st movie:")
mov2=input("enter the 2nd movie:")
mov3=input("enter the 3rd movie:")
movies.append(mov1)
movies.append(mov2)
movies.append(mov3)
print(movies)'''

#WAP TO CHECK IF A LIST CONTAINS A PALINDROME OF ELEMENTS.(Hints:use copy()method)
'''list=[1,2,4,6,6,4,2,1]
copy_list=list.copy()
copy_list.reverse()
if(copy_list==list):
    print("palindrome")
else:
    print("not palindrome")'''

'''list=["q","w","a","a","w","q"]
copy_list=list.copy()
copy_list.reverse()
if(copy_list==list):
    print("palindrome")
else:
    print("not palindrome")'''


#WAP TO COUNT THE NUMBER OF STUDENTS WITH THE "A" GRADE IN THE FOLLOWING TUPLE:
'''grade=("A","C","F","G","H","Y","A")
print(grade.count("A"))'''
#using list:
'''grade=["A","C","F","G","H","Y","A"]
print(grade.count("A"))'''

#STORE THE ABOVE VALUES IN A LIST & SORT THEN FROM "A" TO "D".
'''list=["A","B","M","F","G","H"]
list.sort()
print(list)'''
