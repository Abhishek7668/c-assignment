#include <stdio.h>
void main(){
    int i=10,input_table;
    printf("Enter the number of which you want to see the multiplication tabble :- ");
    scanf("%d",&input_table);
    for(i=10;i>=1;i--){
        printf("%d * %d = %d\n" , input_table , i , input_table*i);
    }
}