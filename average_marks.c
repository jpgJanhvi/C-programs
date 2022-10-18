#include <stdio.h>
void main()
{
    int n, i;
    float t, m, avg;
    printf("Enter number of students");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the marks of %d student", i);
        scanf("%f", &m);
        t += m;
    }
    avg = t / n;
    printf("Average marks of %d students is %.4f", n, avg);
    printf("\n JANHVI PANDEY CSEDS B");
}
