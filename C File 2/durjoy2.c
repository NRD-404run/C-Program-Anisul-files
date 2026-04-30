/*
write a c program to check whether a given number is even or odd
*/
#include<stdio.h>
void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("number is even");
    }else{
       printf("number is odd");
    }
}
