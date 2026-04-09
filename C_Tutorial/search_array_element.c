//check a element search in an array element or not.
#include<stdio.h>
int main()
{
 int size,i,f=0,index;
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
 		f=1;
 		break;
	}
 }
 if(f==1)
 {
 	printf("\n%d is present at index %d",search_ele,i);
 }
 else
 {
 	printf("\n%d is not present",search_ele);
 }
 return 0;
}

