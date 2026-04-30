#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,remainder;
    float div;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);
   sum=num1+num2;
    printf("sum=%d\n",sum);
    sub=num1-num2;
    printf("sub=%d\n",sub);
    mul=num1*num2;
    printf("mul=%d\n",mul);
    div=(float)num2/num1;
    printf("div=%.1f/n",div);
    remainder=num1%num2;
    printf("remainder =%d",remainder);
}
