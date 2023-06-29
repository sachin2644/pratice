#include<stdio.h>
#include<string.h>
#define MAX 50
void reverse_str(char str[]);
int main()
{
    char str[MAX];
    printf("Enter string :");
    // fgets(str,sizeof(MAX),stdin);
    // fgets(str,MAX,stdin);
    scanf("%[^\n]",str);
    reverse_str(str);
    printf("%s\n",str);
}
void reverse_str(char str[])
{
    int i=0,j=0;
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