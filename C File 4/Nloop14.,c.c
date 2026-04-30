#include<stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter n= ");
    scanf("%f",&n);
    for(i=1.5; i<=n; i++)
    {
        printf("%f ",i);
        sum = sum + i;
    }
    printf("sum = %.1f\n",sum);
}
