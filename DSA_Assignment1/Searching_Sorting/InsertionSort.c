#include<stdio.h>
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j--];
        }
        a[j+1]=key;
    }
}
int main()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,n);
    printf("enter your array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
