#factorial of a number using recursion.
def fact(p):
    if p==0:
        return 1
    elif p==1:
        return 1
    else:
        return p*fact(p-1)
n=int(input("Enter the number:"))
factorial=fact(n)
print("factorial=",factorial)