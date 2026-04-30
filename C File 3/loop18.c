#include<stdio.h>
int main()
{
    int num,temp,sum=0,remainder;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+remainder;
        temp=temp/10;
    }
    printf("Sum of digits : %d\n",sum);
}
