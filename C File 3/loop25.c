#include<stdio.h>
int main()
{
    int initialnum,finalnum,temp,rem,sum=0,i,j,fact;
    printf("Initial value: ");
    scanf("%d",&initialnum);
    printf("Final value: ");
    scanf("%d",&finalnum);
    for(i=initialnum; i<=finalnum; i++)
    {
        temp=i;
        sum=0;
        while(temp!=0){
            rem=temp%10;
            fact=1;
            for(j=1; j<=rem; j++)
            {
                fact = fact*j;
            }
            sum = sum+fact;
            temp=temp/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
}
