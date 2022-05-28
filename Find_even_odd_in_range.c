#include <stdio.h>
void main(){
    int n,i=1;
    printf("Enter the Range = ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("%d = Even\n",i);
        }
        else{
            printf("%d = Odd\n",i);
        }
    i++;
    }
}