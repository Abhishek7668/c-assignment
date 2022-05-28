#include <stdio.h>
void main(){
    int i,n,prime=0;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n==1 || n==0){
            break;
        }

        else if(n%i==0){
            prime++;
        }
    }
    if(prime==2){
        printf("Prime");
    }

    else if(prime==0){
            printf("Neither prime nor composite");
    }

    else{
        printf("Composite");
    }

}