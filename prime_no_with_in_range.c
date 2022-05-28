#include <stdio.h>
void main(){
    int n,i,j,prime;
    printf("Enter Range = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        prime=1;
        if(i==1  || i==0){
            continue;
        }
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d ",i);
        }
    }
}