// HCF and Lcm of 2 numbers.

#include <stdio.h>
void main(){
    int a,b,i,smaller_value,hcf,lcm;
    printf("Enter the values = ");
    scanf("%d",&a);
    printf("Enter the values = ");
    scanf("%d",&b);
    for (i=1;i<=smaller_value;i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    lcm = (a*b)/hcf;
    printf("HCF = %d\n",hcf);
    printf("LCM = %d\n",lcm);
}