#include<stdio.h>
void main()
{
    int a[10][10],m,n,i,j,sum=0;
    printf("enter the order of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the matrix :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("print the matrix is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)

            {
                sum=sum+a[i][i];
            }
        printf("%d",sum);
    }
}
