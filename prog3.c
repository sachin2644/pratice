#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[100];
    char address[10];
};
int main()
{
    struct student std;
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    if(ptr==NULL)
    {
        printf("Memory is unable to allocate\n");
    }
    else
    {
        printf("Memory successfully allocate using malloc \n");
    }
    printf("Enter student id name and address :");
    scanf("%d%s%s",&ptr->id,ptr->name,ptr->address);
    printf("student information displaying below \n");
    printf("id=%d\nname=%s\naddress=%s\n",ptr->id,ptr->name,ptr->address);
}