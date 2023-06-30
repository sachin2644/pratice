#include<stdio.h>
struct student
{
    int id;
    char name[100];
    char address[10];
};
int main()
{
    struct student std;
    struct student *ptr=&std;
    printf("Enter student id, name and address :");
    scanf("%d%s%s",&ptr->id,ptr->name,ptr->address);
    printf("%d\n%s\n%s\n",ptr->id,ptr->name,ptr->address);
}