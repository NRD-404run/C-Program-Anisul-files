#include<stdio.h>
int main()
{
    int num,count=0,i;
    for(num=1; num<=100; num++){
        count=0;
    if(num<=1){
    count=1;
    }else{
    for(i=2; i<=sqrt(num); i++){
    if(num%i==0){
        count=1;
        break;
        }
      }
    }if(count==0){
       printf("%d is prime number\n",num);
           }
    }
    getchar();
}
