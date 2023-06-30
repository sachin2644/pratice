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
    printf("Enter student id, name and address :");
    scanf("%d%s%s",&std.id,std.name,std.address);
    printf("%d\n%s\n%s\n",std.id,std.name,std.address);
}