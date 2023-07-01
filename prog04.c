#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n,*arr;
    printf("Enter size :");
    scanf("%d",&n);
    int big=INT_MIN;
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
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>big)
        {
            big=arr[i];
        }
    }
    printf("largest element in an array is %d\n",big);
    free(arr);
}