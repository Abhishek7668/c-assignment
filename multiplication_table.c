#include <stdio.h>
void main(){
    int i=1,input_table;
    printf("Enter the number of which you want to see the multiplication tabble :- ");
    scanf("%d",&input_table);
    while(i<=10){
        printf("%d * %d = %d\n" , input_table , i , input_table*i);
        i++;
    }

}