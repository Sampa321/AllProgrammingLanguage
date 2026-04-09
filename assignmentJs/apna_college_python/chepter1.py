#print("Hello world")

'''print("sampa is my name.")
print("My age is 18.")'''

'''print("sampa is my name.My age is 18.")'''

#print(12+12)
'''name="sampa" #string use""(double codes)
age=18
price=25.99
print("My name is:",name)
print("My age is:",age)
print("My prics is",price)'''

'''age=18
age1=age
print(age1)'''

'''name="sampa" 
age=18
price=25.99
print(type(name))
print(type(age))
print(type(price))'''

# name1='sampa'
# name2="sampa"
# name3='''sampa'''
# print(name1)
# print(name2)
# print(name3)

'''old=False
a=None
print(type(old))
print(type(a))'''

#print sum:
'''a=100
b=50
sum=a+b
print("sum is:",sum)'''

#string & Numbaric values can operate together with*:
A,B=2,3
Txt="@"
print(A*Txt*B)

#String & String can operate with+:
'''A,B="2",3
Txt="@"
print((A+Txt)*B)'''

#nUMERIC VALUES CAN OPERATE WITH ALL ARITHMETIC OPERATORS
'''A,B=2,3
C=4
print(A+B*C) '''#A+(B+C)=2+(3*4)=2+12=14

#Arithmetic expression with integer and float will result in float.
'''A,B=2,5.0
C=A*B
print(C)'''

#result of division operator withtwo integers will be float:
'''A,B=1,2
C=A/B
print(C)'''

#Integer division with float and int will give int displayed as float
'''A,B=1.5,3
C=A//B #INT CONVERT FLOAT
print(C,A/B)'''

#calculate simple interest:
'''a=float(input("a: "))
b=float(input("b: "))
c=float(input("c: "))
print(a*b*c/100)
si=(a*b*c)/100
print(si)'''

#Type casting:
'''a,b=10,"20"
c=int(b)
print(a+c)'''

'''a=1.3
b=float("1.2")
print(a+b)'''

#question-1(W.A.P TO input 2 number & print their sum )
'''num1=int(input("enter the first number:"))
num2=int(input("enter the second number:"))
sum=num1+num2
print("sum: ",sum)'''

#Question-2(WAP to input side of a square & print its area)
'''side=int(input("enter the side: "))
Square=side*side
print("area: ",Square)'''

#Question-3(WAP to input 2 floating point numbers & print their average)
'''num1=float(input("enter the first number:"))
num2=float(input("enter the second number:"))
average=(num1+num2)/2
print("avearage:",average)'''

#Question-4(WAP to input 2 int numbers a and b.print True if a is greater than or equal to b.If not print False)
num1=int(input("enter the first number:"))
num2=int(input("enter the second number:"))
 
print(num1>=num2)