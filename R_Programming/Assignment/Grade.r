#write a function that assign a letter grade based on a score:"A"for 90 and above,"B" for 80-89,
#"C" for 70-79,"D" for 60-69,and "F" for below 60.
mark<-34
if(mark>=90)
{
    print("A")
}
else if(mark>=80 && mark<=89)
{
    print("B")
}
else if(mark>=70 && mark<=79)
{
    print("C")
}
else if(mark>=60 && mark<=69)
{
    print("D")
}
else
{
    print("F")
}