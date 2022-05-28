#include <stdio.h>
void main(){
    int i=2, n, sum=0;
    printf("Enter the Range - ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i+=2;
    }
    printf("Sum of first %d even numbers is = %d",n,sum);
}