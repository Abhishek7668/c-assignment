#include <stdio.h>
void main(){
    int physics , max_marks , percentage;
    printf("Enter Your Physics Marks = ");
    scanf("%d",&physics);

    printf("Enter the maximum Marks");
    scanf("%d",&max_marks);

    percentage = physics/max_marks;
    
    printf("percentage = %d", percentage);

}