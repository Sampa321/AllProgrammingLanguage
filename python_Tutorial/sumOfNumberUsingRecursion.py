#sum of n number using recursion.
def sum(p):
    if p==0:
        return 0
    elif p==1:
        return 1
    else:
        return p+sum(p-1)
n=int(input("enter the number:"))
add=sum(n)
print("sum of n number=",add)