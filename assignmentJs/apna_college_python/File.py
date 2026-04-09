#open a file:
#f=open('demo.txt','x')

#READINEG A FILE:
'''f1=open('demo.txt','r')
data=f1.read(4)
print(data)
print(type(data))
line1=f1.readline()
print(line1)
line2=f1.readline()
print(line2)
line3=f1.readline()
print(line3)
f1.close()'''

#WRITING A FILE:
'''f=open('demo.txt','w')
f1=open('demo.txt','a')
f2=open('demo.txt','a')
f.write("svu")
f1.write("\nI am a student")
f2.write("\ni have come from Barrackpora")
f.close()
f1.close()'''

'''f=open("demo.txt","r+")
f.write("svu")
print(f.read())
f.close()'''

'''f=open("demo.txt","w+")
print(f.read())
f.write("ABC")
f.close()'''

'''with open("demo.txt","r") as f:
    data=f.read()
print(data)
with open("demo.txt","w") as f:
    data1=f.write("swami vivekananda university")
    print(data1)'''

#delete a file:
'''import os
os.remove("demo.txt")'''

'''CREATE A NEW FILE "PRACTICE.TXT" USING PYTHON ADD THE FOLLOWING DATA IN IT:
HI EVERYONE 
WE ARE LEARNING FILE I/O
USING JAVA
L LIKE PROGRAMMING IN JAVA'''
'''f1=open("python.txt","w")
f1.write("hi everyone\nwe are learning File I/O\nusing Java\nI like programming in Java")'''

#WAF THAT REPLACE ALL OCCURRENCES OF "Java" WITH "Python" in above file.
'''f=open("python.txt","r")
data=f.read()
new_data=data.replace("Java","Python")
print(new_data)'''

#search if the word "learning" exists in the file or not.
'''f=open("python.txt","r")
data=f.read()
if(data.find("larning")!=-1):
    print("found")
else:
    print("not found")'''
#function call
'''def check_for_word():
    word="larning"
    f=open("python.txt","r")
    data=f.read()
    if(data.find(word)!=-1):
        print("found")
    else:
        print("not found")
check_for_word()'''

'''WAP TO FIND IN WHICH LINE OF THE LINE DOES THE WORD "PROGRAMMING" OCCUR FIRST.PRINT-1 WORD NOT FOUND'''
'''def check_for_line():
    word="programming"
    data=True
    line_no=1
    f=open("python.txt","r")
    while data:
        data=f.readline()
        if(word in data):
            print(line_no)
            return
        line_no+=1
    return -1
check_for_line()'''

#from a file containing numbers separated by comma,printthe count even numbers.
f=open("python.txt","r")
count=0
data=f.read()
nums=data.split(",")
print(nums)
for i in nums:
    if(int(i)%2==0):
        count+=1
print(count)