#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int find_largest_element(int arr[],int n);
int main()
{
    int n,*arr,result;
    printf("Enter size :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation is failed\n");
    }
    else
    {
        printf("Memory successfully allocated using malloc\n");
    }
    printf("Enter array elements :");
    result=find_largest_element(arr,n);
    printf("largest element in an array = %d\n",result);
    free(arr);
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