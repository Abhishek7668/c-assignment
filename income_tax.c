#include <stdio.h>
void main(){
    int annual_income , income_tax , income_tax_2 , income_tax_3;
    printf("Enter your annual income = ");
    scanf("%d", &annual_income);

    income_tax = ( annual_income )*5/100;
    income_tax_2 = ( annual_income )*20/100;
    income_tax_3 = ( annual_income )*30/100;
    
    if((annual_income>=250000) && annual_income<500000){
        printf("Your income tax is %d" , income_tax);
    }
    else if((annual_income>=500000) && annual_income < 1000000){
        printf("Your income tax is %d" , income_tax_2);
    }
    else if(annual_income >= 1000000){
        printf("Your income tax is %d" , income_tax_3);
    }
    else{
        printf("No tax for you");
    }
}