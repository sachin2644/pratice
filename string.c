#include<stdio.h>
#define MAX 100
void remove_char(char str[],char ch);
int main()
{
    char str[MAX];
    char ch;
    printf("Enter string :");
    fgets(str,MAX,stdin);
    printf("Enter character :");
    scanf("%c",&ch);
    remove_char(str,ch);
    printf("%s",str);
}
void remove_char(char str[],char ch)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            for(int j=0;str[j]!='\0';j++)
            {
                for(int k=j+1;str[k]!='\0';k++)
                {
                    if(str[j]>str[k])
                    {
                        int temp=str[j];
                        str[j]=str[k];
                        str[k]=temp;
                    }
                }
            }
        }
    }
}