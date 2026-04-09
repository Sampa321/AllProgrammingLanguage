#list: list is a data structure where we can store mutiple data.
'''l=[12,14,35,76,86,98,78,56]'''
'''print(l)'''
#print what type is it.
'''print(type(l))'''
#add element in a list of a position.
'''l.insert(4,36)
print(l)'''
#add element in a list of a position and remove element this position.
'''l[2]=89
print(l)'''
#print max element in a list.
'''l1=max([12,14,35,76,86,98,78,56])
print(f"max=",l1)'''
#print min element in a list.
'''l2=min([12,14,35,76,86,98,78,56])
print(f"min=",l2)'''

#USER INPUT A LIST THEN OTHER LIST ADD PLINDROM NUMBER:
'''l=[]
for i in range(1,100):
    temp=i
    rev=0
    while i!=0:
        rev=rev*10+i%10
        i=i//10
    if rev==temp:
        l.append(rev)
print(l)'''