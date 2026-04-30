#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d",&num1);
    printf("Enter two numbers : ");
    scanf("%d",&num2);
    if(num1>num2)
        printf("large =%d\n",num1);
    else if(num1<num2)
        printf("large =%d\n",num2);
    else
        printf("Numbers are equal");
}
