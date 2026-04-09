/*A number is called palindrome number its reverse equal to its original number.*/
//check a number is palindrome or not.
#include<stdio.h>
int main()
{
	int n,rem,rev=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("%d is palindrome number",temp);
	}
	else{
		printf("%d is not palindrome number",temp);
	}
	return 0;
}

//print palindrome number within a range.
/*#include<stdio.h>
int main()
{
	int n,i,temp,rem,rev;
	printf("enter the number:");
	scanf("%d",&n);
	printf("palindrome number:\n");
	for(i=1;i<=n;i++){
		temp=i,rev=0;
		while(temp!=0){
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(i==rev)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/
