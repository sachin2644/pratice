#include<stdio.h>
void reverse_string(char str[],int len);
int main()
{
    char str[]="to be honest";
    int len;
    len=sizeof(str)/sizeof(str[0])-1;
    reverse_string(str,len);
}
void reverse_string(char str[],int len)
{
    int i=0;
    while(i<len)
    {
        int temp=str[i];
        str[i]=str[len-1];
        str[len-1]=temp;
        i++;
        len--;
    }
    printf("%s\n",str);
}