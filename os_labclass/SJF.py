process={
    5:"p1",3:"p2",2:"p3",7:"p4",1:"p5"
}
bursts=[5,3,2,7,1]

bursts.sort()
n =len(bursts)
wait=[0]*n
tat=[0]*n
for i in range(1,n):
    wait[i]=wait[i-1]+bursts[i-1]
for i in range(n):
    tat[i]=bursts[i]+wait[i]
print("Process \t Burst time \t wait \t Turn around time \t")
for i in range(n):
    print(process[bursts[i]],"\t\t",bursts[i],"\t\t",wait[i],"\t\t",tat[i])
print("Average waiting time :",sum(wait)/n)
print("Average Turn Around time : ",sum(tat)/n)