#include<stdio.h>
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
                int t=arr[i];
                arr[i]=arr[min];
                arr[min]=t;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter your array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    SelectionSort(arr,n);
    printf("Enter your array element:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}