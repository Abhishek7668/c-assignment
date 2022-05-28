#include <stdio.h>
void main(){
    int n;
    printf("Enter the number to be checked = ");
    scanf("%d",&n);
    if(n&1)
    printf("The Number Is Odd \n");
    else
    printf("The Number Is Even \n");
}

