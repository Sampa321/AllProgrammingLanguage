/*Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1 example Input the amount: 375                                                  
There are:                                                             
3 Note(s) of 100.00                                                    
1 Note(s) of 50.00                                                     
1 Note(s) of 20.00                                                     
0 Note(s) of 10.00                                                     
1 Note(s) of 5.00                                                      
0 Note(s) of 2.00                                                      
0 Note(s) of 1.00*/
#include<stdio.h>
int main()
{
	int amount,Note100,Note50,Note20,Note10,Note5,Note2,Note1;
	printf("Input the amount:");
	scanf("%d",&amount);
	Note100=(amount/100);
	amount=amount%100;
	Note50=amount/50;
	amount=amount%50;
	Note20=amount/20;
	amount=amount%20;
	Note10=amount/10;
	amount=amount%10;
	Note5=amount/5;
	amount=amount%5;
	Note2=amount/2;
	amount=amount%2;
	Note1=amount/1;
	printf("100 rupes note=%d\n",Note100);
	printf("50 rupes note=%d\n",Note50);
	printf("20 rupes note=%d\n",Note20);
	printf("10 rupes note=%d\n",Note10);
	printf("5 rupes note=%d\n",Note5);
	printf("2 rupes note=%d\n",Note2);
	printf("1 rupes note=%d\n",Note1);
}
