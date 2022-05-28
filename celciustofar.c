#include <stdio.h>
void main(){
    printf("\t\t\tTEMPERATURE CONVERTER\n");
    float c,f;
    int user_input;
    printf("1) Celcius to farenheight converter \n2) Farenheight to celcius converter\n");
    printf("Press 1 for Celcius to farenheight converter \nPress 2 for Farenheight to celcius converter\n");
    printf("your Answer=");
    scanf("%d", &user_input);
    if(user_input==1){
        printf("Enter the temperature in celcius=");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("The temperature in farenheight is=%0.1f",f);
    }
    else if(user_input==2){
        printf("Enter the temperature in farenheight=");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("The temperature in Celcius is=%0.1f",c);
    }
    else{
        printf("Invalid Input, please check the input you have typed!");
    }
}