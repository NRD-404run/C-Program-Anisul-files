#include<stdio.h>
int main()
{
    int num,temp,remainder,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum*10+remainder;
        temp=temp/10;
    }
    printf("Reverse of number :%d\n",sum);
}
