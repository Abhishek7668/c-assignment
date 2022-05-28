#include <stdio.h>
void main(){
    printf("\t\t\t\tAREA OF CIRCLE AND CYLINDER\n");
    float area,pi=3.14,r,A,R,H;
    printf("Enter the radius of circle=");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle=%0.1f\n",area);
    printf("Enter the radius of cylinder=");
    scanf("%f",&R);
    printf("Enter the height of cylinder=");
    scanf("%f",&H);
    area=pi*R*R*H;
    printf("The area of the cylinder=%0.1f",area);
}


