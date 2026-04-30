#include<stdio.h>
int main()
{
    int num,count=0,totalPrimeNumbers=0,SumofPrimeNumbers=0;
    for(num=1; num<=100; num++)
    {
        count=0;
        if(num<=1){
            count=1;
        }else{
        for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                count=1;
                break;
            }
        }
        }
        if(count==0){
            printf("%d",num);
            totalPrimeNumbers++;
            SumofPrimeNumbers=SumofPrimeNumbers+num;
        }
    }
    printf("\nTotal prime numbers:%d\n",totalPrimeNumbers);
    printf("Sum of prime numbers :%d\n",SumofPrimeNumbers);
}
