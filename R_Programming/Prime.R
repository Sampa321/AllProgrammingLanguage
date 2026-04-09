n<-11
count<-0
for(i in n)
{
    if(n%%i==0)
    {
     count++
    }
    i++
}
if(count==2){
    print("prime")
}
else {
    print("not prime")
}