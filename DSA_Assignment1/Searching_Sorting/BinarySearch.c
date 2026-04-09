#include<stdio.h>
int BinarySearch(int arr[],int key,int l,int r)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        return (arr[mid]==key?mid:(arr[mid]>key)?BinarySearch(arr,key,l,mid-1):BinarySearch(arr,key,mid+1,r));
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
    int index=BinarySearch(arr,key,0,n-1);
    printf(index!=-1?"Found at %d":"Not found",index);
    return 0;
}