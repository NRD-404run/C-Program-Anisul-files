#include<stdio.h>
int main()
{
    int num,count=0,totalPrimeNumbers=0,SumOfPrimeNumbers=0,startingNumber,endingNumber;
    printf("Enter starting number: ");
    scanf("%d",&startingNumber);
    printf("Enter ending number: ");
    scanf("%d",&endingNumber);
    for(num=startingNumber; num<=endingNumber; num++)
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
            printf("%d\t",num);
            totalPrimeNumbers++;
            SumOfPrimeNumbers =SumOfPrimeNumbers+num;
        }
    }
    printf("\nTotal prime numbers : %d\n",totalPrimeNumbers);
    printf("Sum of prime numbers :%d\n",SumOfPrimeNumbers);
}
