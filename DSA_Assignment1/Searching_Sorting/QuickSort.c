#include<stdio.h>
void swap(int *a,int *b)
{
    if(a!=b)
    {
        int t=*a;
        *a=*b;
        *b=t;
    }
   
}
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
    while (1)
    {
        while (i<=high && a[i]<=pivot) 
        {
         i++;
        }
        while (j>=low && a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
        else{
            break;
        }
    }
    swap(&a[low],&a[j]);
    return j;
    
}
void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int j=partition(a,low,high);
        QuickSort(a,low,j-1);
        QuickSort(a,j+1,high);
    }
}
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter your array elements:");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n-1);
    printf("Sorted array element:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
