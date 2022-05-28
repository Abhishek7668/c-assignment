#include <stdio.h>
void main(){
    int a,b;
    printf("Enter the 1st Number = ");
    scanf("%d",&a);
    printf("Enter the 2nd Number = ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("1st Number after swapping = %d",a);
    printf("1st Number after swapping = %d",b);
}