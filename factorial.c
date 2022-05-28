//Factorial of a given number

#include <stdio.h>
void main(){
    int i=1,j=1,n;
    printf("Enter the number for finding factorial");
    scanf("%d",&n);
    while(i<=n){
        j=j*i;
        i++;
    }
    printf("Factorial is %d",j);
}