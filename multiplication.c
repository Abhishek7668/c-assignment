#include <stdio.h>
void main(){
    int a,b,i,random=0;
    printf("Enter the number = ");
    scanf("%d",&a);
    printf("Enter the 2nd number = ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        random=random+b; 
    }
    printf("%d",random);
}