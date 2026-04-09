#(if-else)
'''a=int(input("enter the number of a:"))
b=int(input("enter the number of b:"))
if(a>b):
    print("The greatest number is=",a)
else:
    print("The greatest number is=",b)'''

#Nested if-else:
num=int(input("enter the number:"))
if(num>0):
    if(num%2==0):
        print("positive even=",num)
    else:
        print("positive odd=",num)
else:
    if(num%2==0):
        print("Negative even=",num)
    else:
        print("Negative odd=",num)

#if-else lader:
'''a=int(input("enter the number of a:"))
b=int(input("enter the number of b:"))
c=int(input("enter the number of c:"))
if(a>=b and a>=c):
    print("The greatest number is=",a)
elif(b>=c and b>=a):
    print("The greatest number is=",b)
else:
    print("The greatest number is=",c)'''