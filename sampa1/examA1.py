##(18/03/2024)
#Question-1
# str=input("enter the string:")
# v_count=0
# c_count=0
# for i in str:
#     if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
#         v_count+=1
#     else:
#         c_count+=1
# print(f"vowel={v_count} consonant={c_count} ")

# Question-2:
# name=input("enter the string:")
# rev_str=''
# for i in range(1,len(name)+1):
#     rev_str=rev_str+name[-i]
# if rev_str==name:
#     print("palindrome")
# else:
#     print("Not palindrome")

# # Question-3:
# l1=[]
# l2=[]
# common_word=[]
# str1=input("enter first string:")
# str2=input("enter second string:")
# l1=str1.split()
# l2=str2.split()
# for i in l1:
#     if i in l2:
#        common_word.append(i)
# for i in l2:
#     if i in l1:
#        common_word.append(i) 
# print(common_word)

#Question-4:
name=input("enter your name:")
count=0
search_ch="a"
for i in name:
    if search_ch==i:
        count+=1
print(count)