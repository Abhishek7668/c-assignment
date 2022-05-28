#include <stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    printf("Enter the third number = ");
    scanf("%d",&c);
    printf("Enter the fourth number = ");
    scanf("%d",&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("The greatest Number is %d",a);
            }
            else{
                printf("The greatest Number is %d",d);
            }
        }
    }
    else if (b>c){
        if(b>d){
            printf("The greatest Number is %d",b);
        }
        else{
            printf("The greatest Number is %d",d);
        }
    }
    else if(c>d){
        printf("The greatest Number is %d",c);
    }
    else{
        printf("The greatest number is %d",d);
    }
}