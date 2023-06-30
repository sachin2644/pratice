#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);
int main()
{
    char str[]="to be honest";
    // int len;
    // len=sizeof(str)/sizeof(str[0])-1;
    reverse_string(str);
    printf("%s\n",str);
}
void reverse_string(char str[])
{
    int j=0,i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        str[i]=str[i]+str[j];
        str[j]=str[i]-str[j];
        str[i]=str[i]-str[j];
        i++;
        j--;
    }
}