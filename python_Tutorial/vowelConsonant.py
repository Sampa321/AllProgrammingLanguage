#check a char is vowel or consonant.
'''ch=input("enter the char:")
if(ch=="a" or ch=="e" or ch=="i" or ch=="o" or ch=="u" or ch=="A" or ch=="E" or ch=="I" or ch=="O" or ch=="U"):
    print("The vowel character is=",ch)
else:
    print("The consonant character is=",ch)'''

#WAP to count how many vowel and consonant present.
string=input("enter the string:")
v_count=0
c_count=0
for ch1 in string:
    ch=ch1.lower()
    if(ch=="a" or ch=="e" or ch=="i" or ch=="o" or ch=="u"):
        v_count+=1
    else:
        c_count+=1
print(f"vowel={v_count} consonent={c_count}")

