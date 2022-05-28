#include <stdio.h>
void main(){
    int a,b,i,s=1;
    printf("enter base =  ");
    scanf("%d",&a);
    printf("enter power =  ");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        s=s*a;
    }
    printf("%d",s);
}