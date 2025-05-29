#include<stdio.h>

int main()
{
    char str[100];
    int *ptr=&str[100];
    int length=0;

    printf("enter any string : ");
    gets(str);

    

    for(int i=0;str[i]!='\0';i++)
    {
        length++;
        ptr++;
    }

    printf("the length of string : %d",length);

    return 0;
}