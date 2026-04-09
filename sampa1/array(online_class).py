'''import array as arr
ar1=arr.array('i',[1,2,3,4,5,6,7]) #index:0-value:1
ar1[0]=56
print(ar1) #output:56,2,3,4,5,6,7
print(ar1[1:4]) #element:2,3,4
ar1.append(58) 
print(ar1) #56,2,3,4,5,6,7,58
print(ar1.count(2)) #output:1
ar1.reverse()
print(ar1)''' #output:58,7,6,5,4,3,2,56

#knowledge for unorder:
'''info={"carpa",12,"false",3.4}
for item in info:
    print(item)'''

#knowledge for unorder:
'''info={11,12,13,34}
for item in info:
    print(item)'''

#user input of array element:
'''import array as arr
r=arr.array('i',[])
n=int(input("enter the value:"))
for i in range(n):
    a=int(input("enter the number:"))
    r.append(a)
print(r)'''
#question-1:
'''import array as arr
r=arr.array('i',[])
n=int(input("enter the value:"))
for i in range(n):
    a=int(input("enter the number:"))
    r.append(a)
print("original array=",r)
a=int(input("enter the remove number:"))
r.pop(a)
print("remove array=",r)'''

#question-2:
'''import array as arr
r=arr.array('b',[])
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the array element:"))
    r.append(a)
print("original array=",r)
c=r.tobytes()
print(c)'''

#question-3:
'''list=[]
import array as arr
r=arr.array('i',[])
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the list element:"))
    list.append(a)
print(list)
for j in list:
    r.append(j)
print(r)'''

#convert to array to list:
'''
list=[]
import array as arr
r=arr.array('i',[])
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the list element:"))
    list.append(a)
print(list)'''

#convery array to list and remove dublicate element from array:
'''import array as arr
r=arr.array('i',[])
list=[]
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the array element:"))
    r.append(a)
print("your original array=",r)
#convert list:
for i in r:
    list.append(i)
print("your list:",list)
#set use remove for dublicate element:
print("after remove dublicate element:",set(list))'''

#remove dublicate element from array:
'''import array as arr
r=arr.array('i',[])
r1=arr.array('i',[])
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the array element:"))
    r.append(a)
print("your original array=",r)
for i in r:
    if i not in r1:
        r1.append(i)
print("After removing dublicate element:",r1)'''
#others process:
'''import array as arr
r=arr.array('i',[])
n=int(input("enter the size of an array element:"))
for i in range(n):
    a=int(input("enter the array element:"))
    r.append(a)
print("your original array=",r)
print("After removing dublicate element:",set(r))'''

#set to list:
'''set={12,23,23,34,56,45}
a=list(set)
print(a)
'''



