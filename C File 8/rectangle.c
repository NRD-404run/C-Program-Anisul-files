#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter a length =  ");
    scanf("%f",&length);
    printf("Enter a width =  ");
    scanf("%f",&width);
    area=length*width;
    printf("Area of rectangle = %.2f\n",area);
    perimeter =2*(length+width);
    printf("Perimeter of rectangle = %.2fcm\n",perimeter);
}
