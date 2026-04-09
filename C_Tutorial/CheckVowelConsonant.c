//check a character is vowel or consonant.
#include <stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	char c=ch;
	ch=tolower(ch);
	if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
		printf("%c is vowel",c);
	}
	else{
		printf("%c is consonant",c);
	}
	return 0;
}
