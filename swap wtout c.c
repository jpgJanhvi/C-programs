#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped:%d%d",a,b);
}
