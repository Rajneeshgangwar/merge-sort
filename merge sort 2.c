#include<stdio.h>
#include<conio.h>
void merge_sort(int,int);
void merge_array(int,int,int,int);
int arr[100];
void main()
{
    int i,n;
    printf("enter the no. of element of the array: ");
    scanf("%d",&n);
    printf(" enter the element in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    merge_sort(0,n-1);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
void merge_sort(int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        merge_sort(i,mid);
        merge_sort(mid+1,j);
        merge_array(i,mid,mid+1,j);
    }

}
void merge_array(int a,int b,int c,int d)
{
 int t[100];
 int i=a,j=c,k=0;
    while(i<=b && j<=d)
    {
        if(arr[i]<arr[j])
            t[k++]=arr[i++];
        else
            t[k++]=arr[j++];
    }
  while(i<=b)
      t[k++]=arr[i++];
  while(j<=d)
      t[k++]=arr[j++];
     for(i=a,j=0;i<=d;i++,j++)
        arr[i]=t[j];
}
