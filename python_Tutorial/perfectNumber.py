#check a mumber is perfect number or not.
'''n=int(input("enter the number:")) #6
sum=0
for i in range(1,n): #1,2,3,4,5
    if(n%i==0):
        sum+=i   #1+2+3=6
if(sum==n):
    print(f"{n} is perfect number")
else:
    print(f"{n} is not perfect number")'''

#print perfect number within a range.
n=int(input("enter the number:")) #10

for i in range(1,n+1): #10
    sum=0
    for j in range(1,i): #1,2,3,4,5,6,7,8,9
        if(i%j==0): #
            sum+=j
    if(sum==i):
        print(i)