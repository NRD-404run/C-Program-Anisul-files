#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum=num1+num2+num3;
    printf("sum=%d\n",sum);
    avg=(float)sum/3;
    printf("Average =%.1f\n",avg);
}
