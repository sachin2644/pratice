#include<stdio.h>
#include<string.h>
#define MAX 100
void remove_char(char str[],char ch);
void sort_string(char str[]);
int main()
{
    char str[MAX];
    char ch;
    printf("Enter string :");
    fgets(str,MAX,stdin);
    printf("Enter character :");
    scanf("%c",&ch);
    remove_char(str,ch);
    sort_string(str);
    printf("%s\n",str);
}
void remove_char(char str[],char ch)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            for(int j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
        }
    }
}
void sort_string(char str[])
{
    int len;
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}