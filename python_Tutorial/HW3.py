#print sum 1 to 10 natural numbers.
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum=sum+i
print("sum of 10 numbers=",sum)'''

#print sum of all even number within a range(1-10).
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    if(i%2==0):
        sum+=i
print("sum of even number=",sum)'''

#print sum of all odd number within a range(1-10).
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1,2):
    sum+=i
print("sum of odd number=",sum)'''

#print square sum of all even number.
'''n=int(input("enter the number:"))
sum=0
for i in range(2,n+1,2):
    sum=sum+pow(i,2)
print("square sum of even number=",sum)'''

'''n=int(input("enter the number:"))
sum=(int)((n*(n+1)*(n+2))/6)
print(sum)'''

#print square sum of odd number.
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1,2):
    sum=sum+pow(i,2)
print("square sum of odd number=",sum)'''

#print square sum of natural number.
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum+=pow(i,2)
print(sum)'''

'''n=int(input("enter the number:"))
sum=(int)((n*(n+1)*(2*n+1))/6)
print("square sum of natural numbers=",sum)'''

#sum(1-50)number which is divisible by 3 and 5.
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    if(i%3==0 and i%5==0):
        sum+=i
print("sum=",sum)'''

#print sum of(1^5+2^5+3^5+......+n^5).
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum+=pow(i,5)
print("sum=",sum)'''

#print sum of cube natural numbers(1^3+2^3+3^3+......+n^3).
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum+=pow(i,3)
print("cube sum of natural number=",sum)'''

'''n=int(input("enter the number:"))
sum=pow((n*(n+1)),2)//4
print("sum=",sum)'''

#print sum of(1^1+2^2+3^3+4^4+......+n^n).
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum+=pow(i,i)
print("sum=",sum)'''

#print sum of(1+2/3+3/5+4/7+5/9+........)
'''n=int(input("enter the number:"))
sum=0
for i in range(0,n+1):
    sum+=((i+1)/(2*i+1))
print(sum)'''

#print (1/2+2/3+3/4+4/5+......+n/n+1)
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    sum+=(i/(i+1))
print(sum)'''

#print(1^2+2^3+3^2+4^3+5^2+.........)
n=int(input("enter the number:"))
sum=0
for i in range(1,n+1):
    if(i%2==0):
        sum+=pow(i,3)
    else:
        sum+=pow(i,2)
print(sum)