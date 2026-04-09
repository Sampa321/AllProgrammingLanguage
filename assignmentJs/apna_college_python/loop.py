#print numbers from 1 to 100:
'''i=1
while i<=100:
    print(i)
    i+=1'''
#print numbers from 100 to 1:
'''i=100
while i>=1:
    print(i)
    i-=1'''
#print the multiplication table of a number n:
'''n=2
i=1
while i<=10:
    print(n*i)
    i+=1'''
#store following element in a list:[1,4,9,16,25,36,49,64,81,100]
'''n=1
i=1
while n<=10:
    list.append(n*i)
    n+=1
    i+=1
print(list)'''

#print the elements of the following list using a loop:[1,4,9,16,25,36,49,64,81,100]
'''list=[1,4,9,16,25,36,49,64,81,100]
for i in list:
    print(i)'''

#search for a number x in the tuple using loop:(1,4,9,16,25,36,49,64,81,100)
'''tuple=(1,4,9,16,25,36,49,64,81,100)
x=9
idex=0
while idex<len(tuple):
    if(tuple[idex]==x):     #linear search
        print("found at idex",idex)
    else:
        print("finding..")
    idex+=1'''


'''break:used to terminate the loop when encountered.'''
'''continue:terminates execution in the current iteration & continues execution of the loop 
with the next iteration.'''
#examples of break :
'''i=1
while i<=5:
    if(i==3):
        break
    print(i)
    i+=1
print("end the loop")'''
#examples of continue:
'''i=1
while i<=5:
    if(i==3):
        i+=1
        continue  #skip this value
    print(i)
    i+=1'''
#print all even numbers using continue
'''i=1
while i<=10:
    if(i%2!=0):
        i+=1
        continue
    print("even numbers=",i)
    i+=1'''
#print all odd numbers using continue:
i=1
while i<=10:
    if i%2==0:
        continue
    print("odd numbers=",i)
    i+=1
    

'''LOOPS:loops are used for sequential traversal.For traversing list,string,tuples etc.'''
'''list=[1,2,3,45,98]
for i in list:
    print(i)'''

'''tuple=(1,2,35,6,87,98)
for i in tuple:
    print(i)'''
     
'''str=["sampa","apple","mango","orange"]
for i in str:
    print(i)'''

'''name="sampa"
for i in name:
    print(i)'''

'''name="sampa"
for i in name:
    print(i)
else:
    print("end code")'''

'''str="sampa"
for i in str:
    if(i=='a'):
        print("a found")
        break
    print(i)
print("end")'''

'''str="sampa"
for char in str:
    if(char=='a'):
        print("a found")
        break
    print(char)
else:
    print("end")'''

#USING LOOP
#print the elements of the following list using a loop:[1,4,9,16,25,36,49,64,81,100]
'''list=[1,4,9,16,25,36,49,64,81,100]
for i in list:
    print(i)'''

#search for a number x in this tuple using loop:(1,4,9,16,25,36,49,64,81,100)(using while)
'''tuple=(1,4,9,16,25,36,49,64,81,100)
x=9
idex=0
while idex<len(tuple):
    if(idex==x):
        print("number found at index")
        break
    idex+=1'''
#search for a number x in this tuple using loop:(1,4,9,16,25,36,49,64,81,100)(using for)
'''tuple=(1,4,9,16,25,36,49,64,81,100)
x=9
idex=0
for i in tuple:
    if(i==x):
        print("number found at idex",idex)
        break
    idex+=1'''
#search for a number x in this tuple using loop:(1,4,9,16,25,36,49,64,81,100)(not using break)
'''tuple=(1,4,9,16,25,36,49,64,81,100,9)
x=9
idex=0
for i in tuple:
    if(i==x):
        print("number found at idex",idex)
    idex+=1'''


'''RANGE:range functions return a sequence of numbers,starting from 0 by default,and increments by 1(by default) 
and stop before a specified number.'''
'''for i in range(5):  #range(stop)
    print(i)'''
'''for i in range(0,5):  #range(start,stop)
    print(i)'''
'''for i in range(0,5,2):  #range(start,stop,step),2 increases
    print(i)'''

#print all odd number using range function.
'''for i in range(1,10,2):
    print("odd number=",i)'''

#print all even number using range function.
'''for i in range(2,10,2):
    print("even number=",i)'''


#USING FOR & RANGE:
#print numbers from 1 to 100.
'''for i in range(1,101):
    print(i)'''

#print numbers from 100 to 1.
'''for i in range(100,0,-1):
    print(i)'''

#print the multiplication table of a number n.
'''n=int(input("enter the number of n:"))
a=int(input("enter the number of a:"))
for i in range(1,n+1):
    print(a*i)
    i+=1'''


'''PASS:pass is a null statement that does nothing.It is used as a placeholder for future code.'''
'''for i in range(5):
    pass
print("end")'''

#wap to find the sum of first n numbers.(using while)
'''n=int(input("enter the number of n:"))
i=int(input("enter the number of i:"))
sum=0
while i<=n:
    sum=sum+i
    i+=1
print(sum)'''

#wap to find the sum of first n numbers.(using for)
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum=sum+i
print("total sum=",sum)'''

#wap to find the factorial of first n numbers.(using for)
'''n=int(input("enter the number of n: "))
fact=1
for i in range(1,n):
    fact=fact*i
print(fact)'''

#wap to find the factorial of first n numbers.(using while)
'''n=int(input("enter the number:"))
i=1
fact=1
while i<=n:
    fact*=i
    i+=1
print("factorial=",fact)'''