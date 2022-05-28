//Program to find the entered number is neon number or not

#include <stdio.h>
void main(){
    int n,i,sq=1,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1;i<=2;i++){
        sq=sq*n;
    }
    printf("square of the number = %d\n",sq);
    while(sq>0){
        sum=sum+(sq%10);
        sq=sq/10;
    }
    printf("sum of the digit is = %d\n",sum); 
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Non Neon Number");
    }
}