//WAC to find the area and perimeter of a circle:
#include <stdio.h>

int main() {
    int a,b,area,perimeter;
     printf("enter the value of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     area=a*b;
     perimeter=2*(a+b);
     printf("area=:%d",area);
     printf("\n");
     printf("perimeter=:%d",perimeter);
    return 0;
}

