#include <stdio.h>
void main(){
    int n,i=1,c,a=-1,b=1;
    printf("Enter the limit = ");
    scanf("%d",&n);
    while(i<=n){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        i++;
    }
}