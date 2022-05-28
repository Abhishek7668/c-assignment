#include <stdio.h>
void main(){
    int i=1,j,sum=0,n=8;
    while(i<=10){
        sum+=i*n;
        i++;
    }
    printf("sum is %d",sum);
}