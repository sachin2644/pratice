#include<stdio.h>
void remove_char(char str[],char ch,int len);
void print_char(char str[],int len);
int main()
{
    char str[]="sachin kittur";
    char ch;
    printf("Enter character you want to remove :");
    scanf("%c",&ch);
    int len;
    len=sizeof(str)/sizeof(str[0]);
    printf("len=%d\n",len);
    remove_char(str,ch,len);
    print_char(str,len);
}
void remove_char(char str[],char ch,int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
}
void print_char(char str[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    str[i]!='\0';
    printf("\n");
}