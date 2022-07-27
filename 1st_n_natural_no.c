#include<stdio.h>
void main()
{
    int sum=0,i,n;
    printf("enter the value:");
    scanf("%d\n",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;


    }
    printf("sum:%d",sum);
    return 0;


    for(i=n;i>=1;i--)
        printf("%d\n",i);

}
