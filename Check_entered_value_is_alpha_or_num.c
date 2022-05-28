#include <stdio.h>
void main(){
    char c;
    scanf("%c",&c);
    if (c>=65 && c<=90|| c>=97 && c<=122)
    printf("it is alpha");
    else if (c>=48 && c<=57)
    printf("it is digit");
    else
    printf("practical");
}