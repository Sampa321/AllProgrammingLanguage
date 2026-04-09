'''Question1:Take two number from user and perform those operation:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Module'''
'''a=int(input("enter the number of a:"))
b=int(input("enter the number of b:"))
sum=a+b
sub=a-b
mul=a*b
div=a/b
module=a%b
print("sum of a and b is:",sum)
print("sub of a and b is:",sub)
print("mul of a and b is:",mul)
print("div of a and b is:",div)
print("mod of a and b is:",module)'''


'''Question2:write a program calculate the area and perimeter of a rectangle:
    Hint: Peri:2*(l+b)
    Area:l*b'''
'''l=int(input("enter the length:"))
b=int(input("enter the base:"))
peri=2*(l+b)
Area=l*b
print("perimeter of a rectangle:",peri)
print("Area of a ractangle:",Area)'''


#Question3:WAP to calculate total and average marks of five subject marks taking from user.
'''sub1=int(input("enter the sub1:"))
sub2=int(input("enter the sub2:"))
sub3=int(input("enter the sub3:"))
sub4=int(input("enter the sub4:"))
sub5=int(input("enter the sub5:"))
TotalMarks=(sub1+sub2+sub3+sub4+sub5)
AverageMarks=(TotalMarks/5)
print("Total marks of five subject:",TotalMarks)
print("Average marks of five subject:",AverageMarks)'''


#Question4:WAP calculate the simple interest.
'''p=int(input("enter the principal:"))
r=int(input("enter the rate:"))
t=int(input("enter the time:"))
SI=((p*r*t)/100)
print("Simple interest is:",SI)'''


#wap to compute the perimeter anad area of a circle with agiven radius.
'''r=int(input("enter the radius:"))
perimeter=2*(3.14)*r
Area=(3.14)*r*r
print("perimeter of a circle:",perimeter)
print("Area of a circle:",Area)'''


#wap to convert specified days into years,weeks and days.
'''day=int(input("enter the days:"))
years=day//365
a=day%365
month=a//30
b=a%30
weeks=b//7
days=b%7
print("years:",years,"\n""months=",month,"\n""weeks=",weeks,"\n""days=",days)'''

#wap to convert specified seconds into hour,minit and seconds.
seconds=int(input("enter the days:"))
hour=seconds//3600
seconds=seconds%3600
minit=seconds//60
second=seconds%60
print("hour=",hour,"\n","minit=",minit,"\n","seconds=",second)