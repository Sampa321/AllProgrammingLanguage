string1=input("enter 1st string:")
dic={}
for i in string1:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
print(dic)