#include<stdio.h>
int add(int *,int *);
int main()
{
    int a=10,b=20;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr1=&b;
    int res=add(&a,&b);
    printf("res=%d\n",res);
}
int add(int *a,int *b)
{
    return *a+*b;
}