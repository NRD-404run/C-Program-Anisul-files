#include<stdio.h>
int main()
{
    int num,first=2,second=3,i;
    printf("Enter the number of terms in Lucas series : ");
    scanf("%d",&num);
    printf("Lucas series up to %d terms : \n",num);
    printf("%d %d ",first,second);
    for(i=3; i<=num; i++)
    {
        int next = first + second;
        printf("%d ",next);
        first = second;
        second = next;
    }
    printf("\n");
}
