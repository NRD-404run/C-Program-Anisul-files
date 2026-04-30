//input num
//positive/negative

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number \n");
    scanf("%d",&num);

    if(num>0)
        printf ("positive \n");
    else if(num<0)
        printf("negative \n");
    else
        printf("zero");
}
