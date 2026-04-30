/*
program to check whether a person is eligible to vote or not
*/
#include<stdio.h>
void main(){
   int age;
   printf("Enter the age: ");
   scanf("%d",&age);
   if(age>=18){
    printf("You can voted");
    }else{
     printf("you can't voted");
    }
}
