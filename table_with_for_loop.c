#include <stdio.h>
void main(){
    int i=1,input_table;
    printf("Enter the number of which you want to see the multiplication tabble :- ");
    scanf("%d",&input_table);
    for(i=1;i<11;i++){
        printf("%d * %d = %d\n" , input_table , i , input_table*i);
    }
}