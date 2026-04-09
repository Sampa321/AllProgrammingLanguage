#FUNCTION:function is a block of statements that perform a specific task.

#print sum of the number using function.
'''def sum(a,b):  #a,b=parameters
    print("sum=",a+b)
    return a+b
sum(2,4)  #function call;arguments
sum(4,6)
sum(7,8)'''


'''def mul(a=1,b=2):
    print("mul=",a*b)
    return a*b
mul()'''

'''def print_hello():
    print("hello")
output=print_hello()
print(output)   #none'''

#average of 3 numbers:
'''def avg(a,b,c):
    sum=a+b+c
    avg=sum/3
    print("average=",avg)
    return avg
avg(3,4,5)'''

'''print("hello","world") #sep=" " '''

'''print("hello")
print("world")'''   #end="\n"

'''print("hello",end=" ")
print("world")'''

'''print("hello","&","world")'''
 

#DEFAULT PARAMETERS:Assigning a default value to parameter,which is used when no argument is passed.
'''def sum(a,b=1):   #that is satisfied
    print("sum=",a+b)
    return a+b
sum(2)'''

'''def sum(b,a=1):  #it is satisfied but sum(a=1,b) is not satisfied and something error
    print("sum=",a+b)
    return a+b
sum(1)'''

#QS:WAF to print the length of a list.(list is the parameter)
'''city=["kolkata","delhi","karala","bangaluru","howrah","mumbai"]
def print_len(list):
    print(len(list))
print_len(city)'''

#QS:WAF to print the elements of a list in a single line.(list is the parameter)
'''city=["kolkata","delhi","karala","bangaluru","howrah","mumbai"]
def print_list(list):
    for i in list:
        print(i,end=" ")
print_list(city)
print()'''

#Waf to find the factorial of n.(n is the parameter)
'''def fact(n):
    fact=1
    for i in range(1,n+1):
        fact*=i
    print("factorial=",fact)
fact(5)'''

'''def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)
print("factorial=",fact(5))'''

#QS:waf to convert USD to INR.
'''def converter(usd_value):
    inr_value=usd_value*83
    print(usd_value,"USD=",inr_value,"INR")
converter(10)'''


#RECURSION:When a function calls itselfrepeatedly.
#print 5 to 1 number.
'''def show(n):
    if(n==0):
        return
    print(n)
    show(n-1)
show(5)'''

#return n!:      #0!,1!=1
'''def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)
print(fact(5))'''

#write a recursive function to calculate the sum of first n natural numbers.
'''def sum(n):
    if(n==0):
        return 0
    else:
        return n+sum(n-1)
print("total sum=",sum(10))'''

#write a recursive function to print all element in a list.Hint:use list & index as parameters.
'''fruit=["mange","apple","orange","watermelon","banana"]
def print_list(list,index):
    if(index==len(list)):
        return
    print(list[index])
    print_list(list,index+1)
print_list(fruit,0)'''

'''fruit=["mange","apple","orange","watermelon","banana"]
def print_el(list):
    for i in list:     #normal only use list and func
        print(i)
print_el(fruit)'''