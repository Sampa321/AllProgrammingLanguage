#include<stdio.h>
int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key:");
    scanf("%d",&key);
    int index=LinearSearch(arr,n,key);
    printf(index!=-1?"Found at %d":"Not found",index);
    return 0;
}