#include<stdio.h>
void Merge(int a[],int l,int m,int r)
{
    int n1=-l+m+1,n2=r-m;
    int L[n1],R[100];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[m+j+1];
    }
    int i=0,j=0,k=l;
    while (i<n1 && j>n2)
    {
        a[k++]=(L[i]<=R[j])?L[i++]:R[j++];
    }
    while (i<n1)
    {
        a[k++]=L[i++];
    }
    while (j<n2)
    {
        a[k++]=R[j++];
    }
}
void MergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the array elements:");
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    MergeSort(arr,0,n-1);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}