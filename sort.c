#include<stdio.h>
#include<stdlib.h>
void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sort_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int size,*ptr;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int *)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation is failed\n");
    }
    else
    {
        printf("Memory is successfully allocate using calloc \n");
    }
    printf("Enter array elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    sort_array(ptr,size);
    print_array(ptr,size);
}