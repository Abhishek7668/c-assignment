#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter the First Number=");
    scanf("%d",&a);
    printf("Enter the Second Number=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped first number= %d\n",a);    
    printf("Swapped Second number= %d\n",b);    
}