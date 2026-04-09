'''n=int(input("enter the number:"))
fact=1
for i in range(1,n+1):
    fact*=i
print(fact)'''

#factorial of a number using function.
def fact(n):
    f=1
    for i in range(1,n+1):
        f*=i
    return f
n1=int(input("enter the number:"))
factorial=fact(n1)
print(factorial)