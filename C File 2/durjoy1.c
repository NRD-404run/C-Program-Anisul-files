/*
write a c program to check whether a given number is positive or negative
*/
#include<stdio.h>
void main (){
     int a;
     printf ("Enter the number : ");
     scanf("%d",&a);
     if(a>=0){
       printf ("positive number");
        }else {
           printf("negative number");
        }
}
