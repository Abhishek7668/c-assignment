#include <stdio.h>
void main(){
    int a=4;
    switch(a){
        default:printf("default\n");
        case 4:printf("case 2\n");
        case 2+2:printf("case 3\n");
    }
}