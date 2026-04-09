#Fibonacci series using recursion:
'''def fibo(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fibo(n-1)+fibo(n-2)
n1=int(input("enter the number:"))
print("fibonacci series:")
for i in range(n1):
    print(fibo(i))'''

#power function using recursion:
'''def pow(a,b):
    if b==0:
        return 1
    elif b==1:
        return a
    else:
        return a*pow(a,b-1)
m=int(input("enter the base value"))
n=int(input("enter the exponetial value:"))
r=pow(m,n)
print(f"{m}^{n}=",r)'''

#frog jump:
def frog(n):
    if n==0:
        return 1
    elif n<0:
        return 0
    else:
        return frog(n-1)+frog(n-2)+frog(n-3)
h=int(input("enter height:"))
step=frog(h)
print("possible path:",step)
