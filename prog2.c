#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);
int main()
{
    char str[]="to be honest";
    reverse_string(str);
    printf("%s\n",str);
}
void reverse_string(char str[])
{
    int j=0,i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}