#include<stdio.h>
int main()
{
    int num1,num2,result;
    float div;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("sum=%d\n",result);
    result=num1-num2;
    printf("sub=%d\n",result);
    result=num1*num2;
    printf("mul=%d\n",result);
    div=(float)num2/num1;
    printf("Div=%.1f\n",div);
}
