# ##(Date-18/03/2024)
# #Question-1:
# for i in range(1,11):
#     print(i)

# #Question-2:
# sum=0
# for i in range(1,51):
#     sum+=i
# print(sum)

# #Question-3:
# name=input("enter the string:")
# v_count=0
# for i in name:
#     if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
#         v_count+=1
# print(f"vowel={v_count}")

#Question-4:
n=7
count=0
for i in range(2,8):
    if(n%i==0):
        count+=1
if(count==1):
    print("prime")
else:
    print("Not Prime")

