#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a & b:");
    scanf("%d%d",&a,&b);
    a=b;
    b=c;
    c=a;
    printf("swapped values are:%d%d",b,c);
}
