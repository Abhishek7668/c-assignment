#include <stdio.h>
int main(){
    int a,b;
    float e,f;
    printf("Enter the first number=");
    scanf("%d",&a);
    printf("Enter the second number=");
    scanf("%d",&b);
    printf("Enter the first float number=");
    scanf("%f",&e);
    printf("Enter the second float number=");
    scanf("%f",&f);
    printf("The sum of two numbers=%d",a+b);
    printf("The difference of two numbers=%d\n",a-b);
    printf("The sum of two numbers=%0.1f",e+f);
    printf("The difference of two numbers=%0.1f\n",e-f);
    return 0;
}
