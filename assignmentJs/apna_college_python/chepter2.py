'''str="My name is sampa Nayak.I am a student of Btech cse."
print(str)'''

'''str="My name is sampa Nayak.\nI am a student of Btech cse."
print(str)'''

'''str="My name is sampa Nayak.\tI am a student of Btech cse."
print(str)'''

#sum of string:
'''str1="Hello"
str2="world"
sum=str1+str2
print(sum)'''

#length of string:
'''str="My name is sampa Nayak."
print(len(str))'''

'''str1="apna"
print("length of str1:",len(str1))
str2="college"
print("length of str2:",len(str2))
str=str1+str2
print("length of str:",len(str))
total=str1+" "+str2
print("length of total:",len(total))'''

#indexing:
'''str="Apna_college"
print(str[5])'''

#my idea:
'''str="Apna_college"
if(str[3]=='a'):
    print("present")
else:
    print("Not Present")'''

#length of str 5 then print yes or not.
'''str="Hello"
if(len(str)==5):
    print("yes")
else:
    print("no")'''

#slicing:
'''str="apna_college"
print(str[1:4])'''

'''str="Apna_college"  
print(str[5:len(str)])'''

#slicing(condition statememts):
'''str="apna_college"
if(str[0:4]=='apna'): #0:4 means print 0,1,2,3 number not print 4 no number
    print("yes")
else:
    print("no")'''

#slicing(negative index)
'''str="Apple"
print(str[-5:-1])'''

#string function:
'''str="i am a student from svu"
print(str.endswith("svu")) #returns true if string end with substr
print(str.capitalize())     #capitalizes 1st order
print(str.replace("svu","apnacollege"))    #replace all ocurrences of old with new
print(str.find("from"))          #return list index of 1st occurrence
print(str.count("am")) '''    #count the occurrence of substr in string

#practice_question-1(WAP to input user's first name & print its length)
'''First_name=input("enter the first name:")
print(len(First_name))'''

#practice_question-2(WAP to find the occurrence of '$' in a string):
'''str="Hi,$I am the $ symbol $99.99"
print(str.count("$"))'''

#nested loop:
'''age=78
if(age>=18):
    if(age>=70):
        print("cannot drive")
    print("can drive")
else:
    print("cannot drive")'''

#practice_question1(Wap to check if a number entered by the user is odd or even):
'''num=int(input("enter the number:"))
if(num%2==0):
    print("even number")
else:
    print("odd number")'''

#practice_question-2(WAP TO FIND THE GREATEST OF 3 NUMBERS ENTERED BY THE USER):
'''a=int(input("enter the number:"))
b=int(input("enter the number:"))
c=int(input("enter the number:"))
if(a>b and a>c):
    print("a is the greater number")
elif(b>a and b>c):
    print("b is the greater number")
else:
    print("c is the greater number")'''

#practice_question-3(WAP to check if a number is a miltiple of 7 or not):
num=int(input("enter the number:"))
if(num%7==0):
    print("multiple of 7")
else:
    print("Not multiple of 7")