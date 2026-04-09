#QUESTION-1(W.A.P.CALCULATE NCR USING RECURSIVE FUNCTION)
'''n=int(input("enter the number:"))
r=int(input("enter the number:"))
def fact(c):
    if c==0 or c==1:
        return 1
    else:
        return c*fact(c-1)
nfact=fact(n)
rfact=fact(r)
n_rfact=fact(n-r)
NCR_RESULT=(nfact)//(rfact*n_rfact)
print("NCR=",NCR_RESULT)'''

#QUESTION-2(W.A.FACTORIAL PROGRAMMA USING RECURSIVE FUNCTION)
'''n=int(input("enter the number:"))
def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
r=fact(n)
print("Factorial=",r)'''

#QUESTION-3(TAKE A USER INPUT LIST AND FIND ALL THE EVEN AND ODD ELEMENTS SEPARATELY)
'''l=[]
l1=[]
l2=[]
for i in range(9):
    a=int(input("enter the list element:"))
    l.append(a)
for i in l:
    if(i%2==0):
        l1.append(i)
    else:
        l2.append(i)
print(f"even_numbers={l1} odd_numbers={l2}")'''

#QUESTION-4(TAKE A USER INPUT LIST AND FIND SUM OF MAX AND MIN ELEMENTS(MAX+MIN))
'''l=[]
for i in range(9):
    a=int(input("Enter the list element:"))
    l.append(a)
l1=max(l)
l2=min(l)
sum=l1+l2
print("sum=",sum)'''

#QUESTION-5(CREATE A DICTIONARY{'STATE':'CAPITAL'} ATLEAST FIVE STATE AND CAPITAL AND PRINT STATE AND CAPITAL USING LOOP)
list={'west bengal':'kolkata','bihar':'patna','assam':'dispur','Rajasthen':'jaipur','Goa':'panaji'}
for i in list:
    print(i,"=",list[i])