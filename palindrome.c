// Reverse of a number 

#include <stdio.h>
void main(){
    int a,sum=0,num;
    printf("enter number = ");
    scanf("%d",&a);
    num=a;
    while(a>0){
        sum=sum*10+(a%10);
        a=a/10;
    }
    printf("%d\n",sum);
    if(sum==num){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}