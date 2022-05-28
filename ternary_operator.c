#include <stdio.h>
void main(){
    int n;
    printf("Enter the number to be checked = ");
    scanf("%d",&n);
    n%2==0?printf("Even"):printf("Odd");
}