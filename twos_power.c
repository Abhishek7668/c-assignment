//Two's Number 

#include <stdio.h>
void main(){
    int pow,i,ans=1;
    printf("Enter a number = ");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++){
        ans=ans*2;
    }
    printf("the answer will be %d",ans);
}