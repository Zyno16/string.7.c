#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char m[20];
    char r[20];
    int n;
    printf("enter the word ? :");
    gets(m);
    strcpy(r,m);
    strrev(r);
    n=strcmp(r,m);
    if(n==0)
        printf("the name is panodrome");
    return 0;
}
