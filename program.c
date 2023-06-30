#include<stdio.h>
#include<string.h>
#define MAX 50
void remove_vowel(char str[],char New[]);
void print_char(char *New);
int main()
{
    char str[MAX],New[MAX];
    printf("Enter string :");
    scanf("%s",str);
    remove_vowel(str,New);
    print_char(New);
}
void remove_vowel(char str[],char New[])
{
    int len,i,j=0;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            New[j]=str[i];
            j++;
        }
    }
}
void print_char(char *New)
{
    while(*New!='\0')
    {
        printf("%c\n",*New++);
    }
}