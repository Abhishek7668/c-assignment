#include <stdio.h>
void main(){
    int a,b;
    printf("Enter The First Number: ");
    scanf("%d", &a);
    printf("Enter The Second Number: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped first Number: %d\n",a);
    printf("Swapped Second Number: %d\n",b);
}