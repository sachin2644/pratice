#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swappin\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swappin\na=%d\nb=%d\n",a,b);
}