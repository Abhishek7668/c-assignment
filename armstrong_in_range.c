#include <stdio.h>
#include <math.h>
void main(){
    int last_var,n,sum=0,count=0,m,o,lower_limit,upper_limit,l,i,j,k;
    printf("Enter the lower limit = ");
    scanf("%d",&lower_limit);
    printf("Enter the upper limit = ");
    scanf("%d",&upper_limit);
    for(i=lower_limit;i<=upper_limit;i++){
        l=k=j=i;
        count=0;
        sum=0;
        while (l>0){
            l/=10;
            count+=1;
        }
        while (j>0){
            last_var=j%10;
            sum=sum+pow(last_var,count);
            j/=10;
        }
        if(k==sum){
            printf("%d\n",sum);
        }
    }    
}