#include <stdio.h>
int main(){
    int n=6,input_var,counter=3,i=1;
    printf("\t\t\t********* GUESSING GAME *********\n");
    for(i;i<=3;i++){
        printf("Guess The Number = ");
        scanf("%d",&input_var);
        if(input_var==n){
            if(counter==3){
                printf("\t\t\t Correct Answer Vro , 5 Points\n");
                break;
            }
            else if(counter==2){
                printf("\t\t\t Correct Answer Vro , 3 Points\n");
                break;
            }
            else{
                printf("\t\t\t Correct Answer Vro , 2 Points\n");
                break;
            }
        }
        else{
            counter-=1;
            if(counter==0){
                printf("\t\t\tWrong answer %d attempts left\n",counter);
                printf("\t\t\t You Have Lost The Game\n",counter);    
                }
            else{
                printf("Wrong Answers %d attempts left",counter);
            }  
        }
}
}