#include <stdio.h>
#include <math.h>
void main(){
    int last_var,n,sum=0,count=0,m,o;
    printf("Enter the number you want to check = ");
    scanf("%d",&n);
    m=o=n;
    while (n>0){
        n/=10;
        count+=1;
    }
    while (m>0){
        last_var=m%10;
        sum=sum+pow(last_var,count);
        m/=10;
    }
    if(o==sum){
        printf("%d is an armnstrong number.",sum);
    }
    else{
        printf("%d is not an armstrong number",o);
    }    
}
