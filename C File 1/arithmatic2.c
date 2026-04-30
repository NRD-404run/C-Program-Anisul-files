#include<stdio.h>
int main()
{
    int num1,num2,result;
    float div,avg;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("sum = %d\n",result);
    avg=(float)result/2;
    printf("Average = %.1f\n",avg);
    result=num1-num2;
    printf("sub =%d\n",result);
    result=num1*num2;
    printf("mul =%d\n",result);
    div=(float)num2/num1;
    printf("div =%.1f\n",div);
    result=num2%num1;
    printf("Remainder =%d\n",result);
    getch();
}
