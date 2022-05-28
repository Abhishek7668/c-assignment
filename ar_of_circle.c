#include <stdio.h>
void main(){
    float area,perimeter,pi=3.14,radius;
    printf("Enter the Radius of circle = ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    printf("Area of the circle= %f\n",area);
    printf("Perimeter of the circle= %f\n",perimeter);
}