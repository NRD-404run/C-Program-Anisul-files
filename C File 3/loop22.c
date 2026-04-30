#include<stdio.h>
int main()
{
    int initalnum,finalnum,temp,r,sum=0;
    printf("initial value : ");
    scanf("%d",&initalnum);
    printf("final value : ");
    scanf("%d",&finalnum);
    for(int i=initalnum; i<=finalnum; i++)
    {
        temp = i;
        while(temp!=0)
        {
            r = temp%10;
            sum = sum + r*r*r;
            temp = temp/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
        sum = 0;
    }
}
