#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
char *rev;
printf("\n Enter the string:");
scanf("%s",a);
rev=strrev(a);
printf("The reverse string is:%s",rev);
return 0;
}
