#include <stdio.h>
void main(){
    int n,sum=0,i=1;
    printf("Enter the limit =");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of the natural number till %d is %d\n",n,sum);
}