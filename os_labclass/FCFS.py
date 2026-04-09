Process={}
k=0
bursts=[]
while(True):
    b = input("Enter burst time for process p{k} :")
    if b=="done":
        break
    bursts.append(b);
    k+=1;
    Process[b]=f"p{k}"
n =len(bursts)
wait=[0]*n
tat=[0]*n
for i in range(1,n):
    wait[i]=wait[i-1]+bursts[i-1]
for i in range(n):
    tat[i]=bursts[i]+wait[i]
print("Process \t Burst time \t wait \t Turn around time \t")
for i in range(n):
    print(Process[bursts[i]],"\t\t",bursts[i],"\t\t",wait[i],"\t\t",tat[i])
print("Average waiting time :",sum(wait)/n)
print("Average Turn Around time : ",sum(tat)/n)