# #Question-1:
# a=12
# b=6
# sum=a+b
# sub=a-b
# mul=a*b
# div=a/b
# mod=a%b
# print("sum=",sum)
# print("sub=",sub)
# print("mul=",mul)
# print("div",div)
# print("mod=",mod)

# #Question-2:
# a=12
# b=34
# c=9
# if(a>b and a>c):
#     print("Greatest=",a)
# elif(b>c and b>a):
#     print("Greatest=",b)
# else:
#     print("Greatest=",c)

#Question-4:
name=input("enter a string:")
rev_str=''
for i in range(1,len(name)+1):
    rev_str+=name[-i]
if(name==rev_str):
    print("palindrome")
else:
    print(" Not palindrome")