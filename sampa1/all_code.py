#perfect number
'''n=int(input("enter the number:"))
sum=0
for i in range(1,n):
    if(n%i==0):
        sum=sum+i
if(sum==n):
    print("perfect number")
else:
    print("Not Perfect number")'''

#print perfect number between a range.
'''a=int(input("enter the number:"))
b=int(input("enter the number:"))
for i in range(a,b+1):
    sum=0
    for j in range(1,i):
        if(i%j==0):
            sum=sum+j
    if(sum==i):
        print(i)'''

#Reverse string:
'''name=input("enter the string:")
rev_str=""
for i in range(1,len(name)+1):
    rev_str=rev_str+name[-i]
print(rev_str)'''

#Reverse a integer.
'''n=int(input("enter the number:"))
rev=0
sum=0
temp=n
while(n!=0):
    rev=n%10
    sum=sum*10+rev
    n=n//10
print(sum)'''

#print a string is palindrom or not.
'''name=input("enter the string:")
rev_str=""
for i in range(1,len(name)+1):
    rev_str=rev_str+name[-i]
if(rev_str==name):
    print("palindrome")
else:
    print("not palindrome")'''

#print a integer is palindrom or not.
'''n=int(input("enter the number:"))
rev=0
temp=n
while n!=0:
    rev=rev*10+n%10
    n=n//10
if(rev==temp):
    print("palindrome")
else:
    print("not palindrome")'''

#print palindrom number between a range.
'''n=int(input("enter the number:"))
for i in range(1,n+1):
    rem=0
    sum=0
    temp=i
    while i!=0:
        rem=i%10
        sum=sum*10+rem
        i=i//10
    if(sum==temp):
        print(temp)'''

#print a number is prime number or not.
'''n=int(input("enter the number:"))
count=0
for i in range(1,n+1):
    if(n%i==0):
        count=count+1
if(count==2):
    print("prime number")
else:
    print("not prime number")'''

#print prime number between a range:
'''a=int(input("enter the number:"))
b=int(input("enter the number:"))
for i in range(a,b+1):
    count=0
    for j in range(1,i+1):
        if(i%j==0):
            count=count+1
    if(count==2):
        print(i)'''

#check a number is armstrong or not:
'''n=int(input("enter the number:"))
rem=0
sum=0
temp=n
while n!=0:
    rem=n%10
    sum=sum+pow(rem,3)
    n=n//10
if(sum==temp):
    print("armstrong number")
else:
    print("not armstrong number")'''

#print armstrong number between a range:
'''a=int(input("enter the number:"))
b=int(input("enter the number:"))
for i in range(a,b+1):
    sum=0
    rev=0
    temp=i
    while i!=0:
        rev=i%10
        sum=sum+pow(rev,3)
        i=i//10
    if(sum==temp):
        print(temp)'''

#print square of the number between a range:
'''n=int(input("enter the number:"))
num=1
while n>=num:
    print(num*num)
    num=num+1'''

#print a number divisible by 5 & 11 or not.
'''n=int(input("enter the number:"))
if(n%5==0 and n%11==0):
    print("divided by 5 and 11")
elif(n%5==0):
    print("only divided by 5")
elif(n%11==0):
    print("only divided by 11")
else:
    print("not divided by 5 and 11")'''

#string print.
'''str=input("enter the string:")
print(str)'''

# string_word print.
'''str=input("enter the string:")
for i in str:
    print(i)'''

# string_count.
'''str=input("enter the string:")
count=0
for i in str:
    count=count+1
print(count)'''

# count vowel and consonant number.
'''str=input("enter the string:")
v_count=0
c_count=0
for i in str:
    if i=='a' or i=='e' or i=='i' or i=='o' or i=='u'or i=='A' or i=='E' or i=='I'or i=='O' or i=='U':
        v_count+=1
    else:
        c_count+=1
print(f"NO of vowel={v_count} No of consonant={c_count}")'''

#a specific character if present in string or not.
'''str=input("enter the string:")
ch=input("enter the ch:")
count=0
for i in str:
    if ch==i:
        count=1
if(count==1):
    print("yes present")
else:
    print("Not present")'''
#other process:
'''str=input("enter the string:")
ch=input("enter the ch:")
if ch in str:
    print("yes present")
else:
    print("not present")'''

# check vowel is present in character or not.
'''name=input("enter the ch:")
for i in name:
    if i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U':
        print("yes present vowel") 
    else:
        print("not present vowel")'''

#cube of a integer.
'''n=int(input("enter the number:"))
cube=pow(n,3)
print(cube)'''

#multiple copies of a string by multiple operator.
'''str=input("enter the string:")
print(str*3)'''

#check a sub string present in string or not.
'''str=input("enter the string:")
sub_str=input("enter the sub string:")
if sub_str in str:
    print("yes present")
else:
    print("not present")'''
#other process use list:
'''l=[]
count=0
str=input("enter the string:")
l=str.split()
sub_str=input("enter the string:")
for i in l:
    if sub_str==i:
        count=1
if(count==1):
    print("yes present")
else:
    print("not present")'''

#find uncommon word between two string.
'''l1=[]
l2=[]
uncommon_word=[]
name=input("enter the string:")
name1=input("enter the string:")
l1=name.split()
l2=name1.split()
for i in l1:
    if i not in l2:
        uncommon_word.append(i)
for i in l2:
    if i not in l1:
        uncommon_word.append(i)
print(uncommon_word)'''

#find common word between two string.
'''l1=[]
l2=[]
common_word=[]
str1=input("enter the string:")
str2=input("enter the string:")
l1=str1.split()
l2=str2.split()
for i in l1:
    if i in l2:
        common_word.append(i)
print(common_word)'''

# w.a.p frequency of a character.
'''name=input("enter the string:")
count=0
search_char=input("enter the string:")
for i in name:
    if search_char==i:
        count+=1
print(count)'''

#count total number of letters and digits and special characters.
'''name=input("enter the string:")
letter=0
digit=0
special_character=0
for i in name:
    if(i>='a' and i<='z') or(i>='A' and i<='Z'):
        letter+=1
    elif(i>='0' and i<='9'):
            digit+=1
    else:
        special_character+=1
print(f"letters={letter} digits={digit} special_characters={special_character}")'''



#LIST:
list=[12,13,23,45,56,78,98,88]
#print(list)
#print(list[3])
#print(type(list))
#print(len(list))
#for i in list:
#    print(i)
#list.append(77)
#print(list)
#list.insert(2,14)
#print(list)
'''list.sort()
print(list)'''
'''list.sort(reverse=True)
print(list)'''
'''list.pop(3)
print(list)'''

#print ascending and discending order:
'''list=[]
for i in range(3):
    a=int(input("enter the list element:"))
    list.append(a)
list.sort()
print("ascending=",list)
list.sort(reverse=True)
print("discending=",list)'''

#Remove duplicate element using set properties and without set properties:
'''list=[12,34,12,45,45,67,78,98,88]
print(list)
s={12,34,12,45,45,67,78,98,88}
print(s)
print(set(list))'''

#create two list with even and odd numbers from a list.
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
print(l1)
print(l2)'''

#create a list and add minimum 10 elements and create a another list to store those element
#which are divided by M and N[M nad from any number taking from user]:
'''list=[]
l1=[]
l2=[]
M=int(input("enter the number:"))
N=int(input("enter the number:"))
for i in range(4):
    a=int(input("enter the list element::"))
    list.append(a)
for i in list:
    if(i%M==0 and i%N==0):
        l1.append(i)
    else:
        l2.append(i)
print(l1)
print(l2)'''

#create a list and store elements and print prime number anather list:
'''list=[]
l1=[]
for i in range(5):
    a=int(input("enter the list element:"))
    list.append(a)
for i in list:
    if(i%2==0):
        l1.append(i)
print(l1)'''

#print palindrome number of a list between a range:
'''l=[]
a=int(input("enter the value of a:"))
b=int(input("enter the value of b:"))
for i in range(a,b+1):
    rev=0
    temp=i
    while i!=0:
        rev=rev*10+i%10
        i=i//10
    if(rev==temp):
        l.append(rev)
print(l)'''


#DICTIONARY:
#Dictionary is a data structure store key and value.
'''my_dict={'Name':'Sampa Nayak','Group':'B','Stream':'Btech CSE','Roll No':'313','College Name':'SVU'}
print(my_dict)
print(my_dict.keys())
print(my_dict.values())
for i in my_dict:
    print(i)
    print(my_dict[i])
print(my_dict['Name'])
print(my_dict['Group'])
print(my_dict["Roll No"])
print(my_dict["Stream"])
print(my_dict["College Name"])'''

#CREATE A DICTIONARY{'STATE':'CAPITAL'} ATLEAST FIVE STATE AND CAPITAL AND PRINT STATE AND CAPITAL USING LOOP:
'''my_dic={'West Bengal':'Kolkata','Assam':'Dispur','Bihar':'Patna','Rajasthan':'Jaipur','Modhya Pradash':'Bhopal'}
for i in my_dic:
    print(i,"=",my_dic[i])'''


#FUNCTION:

