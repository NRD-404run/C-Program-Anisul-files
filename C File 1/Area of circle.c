#include<stdio.h>
int main()
{
    float radius,area,perimeter;
    printf("Enter Radius :  ");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    printf("Area of Circle : %.2f\n",area);
    perimeter=2*3.1416*radius;
    printf("perimeter : %.2fcm\n",perimeter);
}
