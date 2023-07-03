#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int find_largest_element(int arr[],int n);
int find_small_element(int arr[],int n);
int main()
{
    int n,*arr,result,res;
    printf("Enter size :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation is failed\n");
    }
    printf("Enter array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    result=find_largest_element(arr,n);
    res=find_small_element(arr,n);
    printf("largest element in an array = %d\n",result);
    printf("smallest element in an array = %d\n",res);
}
int find_largest_element(int arr[],int n)
{
    int large=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}
int find_small_element(int arr[],int n)
{
    int small=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}