#include<stdio.h>
int sum(int arr[],int size);
int main()
{
    int arr[]={1,2,3,4,6,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *ptr;
    ptr=arr;
    int res=sum(arr,size);
    printf("res=%d\n",res);
}
int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+*arr;
        arr++;
    }
    return sum;
}