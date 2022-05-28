#include <stdio.h>
void main(){
    int a,sum=0,count=0,rev=0,last_var=0,last_var2=0;
    printf("Enter the number = ");
    scanf("%d",&a);
    if(a>99){
        while(a>0){
            last_var=m%10;
            rev=(rev*10)+last_var;
            n/=10;
        }
        while (rev>0){
            count+=1;
            last_var2=rev%10;
            rev/=10;
            if(count==2 || count ==3){
                sum=sum+last_var2;
        }
    }
        
    }
    
    }
    else{
        printf("Please enter number more than two digit number");
    }
}