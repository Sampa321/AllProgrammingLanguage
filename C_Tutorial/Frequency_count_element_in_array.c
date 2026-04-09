//Frequency count of a element in an array:
#include<stdio.h>
int main()
{
int size,i,count=0;
 printf("enter your array size:");
 scanf("%d",&size);
 int search_ele;
 printf("enter your search array element:");
 scanf("%d",&search_ele);
 int arr[size];
 //taking from user input:
 printf("enter your array element:\n");
 for(i=0;i<size;i++)
 {
 	printf("arr[%d]=",i);
 	scanf("%d",&arr[i]);
 }
 //printf your array element:
 for(i=0;i<size;i++)
 {
 	printf("%d\t",arr[i]);
 }
 for(i=0;i<size;i++)
 {
 	if(arr[i]==search_ele)
 	{
 		count+=1;
	 }
 }
 printf("%d is present %d times",search_ele,count);
 return 0;
}
