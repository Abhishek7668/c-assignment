#include <stdio.h>
void main(){
    float per_sub_physics , per_sub_chemistry , per_sub_maths , overall_percent , per_sub , overall , physics , total_max_marks , chemistry , maths , max_marks ;
    printf("Enter Your Physics Marks = ");
    scanf("%f",&physics);
    printf("Enter Your Chemistry Marks = ");
    scanf("%f",&chemistry);
    printf("Enter Your Maths Marks = ");
    scanf("%f",&maths);
    printf("Enter the maximum marks = ");
    scanf("%f",&max_marks);

    total_max_marks = 3*max_marks;
    overall = (physics+chemistry+maths)/total_max_marks;
    overall_percent = overall * 100;
    per_sub_physics = (physics/max_marks)*100;
    per_sub_chemistry = (chemistry/max_marks)*100;
    per_sub_maths = (maths/max_marks)*100;



    if ((((overall_percent <= 40) || per_sub_physics <= 30) || per_sub_chemistry <= 30) || per_sub_maths <= 30){
        printf("Your total percentage is %f and you are failed brother", overall_percent);
    }
    else{
        printf("Your total percentage is %f and you are passed brother", overall_percent);
    }
}