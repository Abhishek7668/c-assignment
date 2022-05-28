// Check whether a person is eligible for licence or not and if not eligible then also tell how many years left for them to being eligible 
#include <stdio.h>
void main(){
    int your_age,required_age;
    printf("Enter Your Age = ");
    scanf("%d",&your_age);
    required_age=18-your_age;
    if (your_age>=18){
        printf("Yes, you are able to apply for licence");
    }
    else{
        printf("No, you are not eligible for licence");
        printf("%d years left for being eligible", required_age);
    }
}