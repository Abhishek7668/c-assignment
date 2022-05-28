#include <stdio.h>
void main(){
    int a;
    printf("Please Give Rating To Our App = ");
    scanf("%d",&a);
    switch (a){
        case 1: // 1 is denoted the value use gives which is in integer datatype
        printf("Your rating is 1, Please leave us the feedback, How can we help you?");
        break;
        case 2:
        printf("Your rating is 2, Please leave us the feedback, How can we help you?");
        break;
        case 3:
        printf("Your rating is 3, Please leave us the feedback, How can we help you?");
        break;
        case 4:
        printf("Your rating is 4, Please leave us the feedback, How can we help you?");
        break;
        default:
        printf("Invalid Rating brother");
        break;
    }
}