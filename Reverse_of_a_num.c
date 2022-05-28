// Reverse of a number 

#include <stdio.h>
void main(){
    int a,sum=0;
    printf("enter number = ");
    scanf("%d",&a);
    while(a>0){
        sum=sum*10+(a%10);
        a=a/10;
    }
    printf("%d",sum);
}