#include <stdio.h>
void main(){
    int a=3,b=4,c=9,d=6,p,m;
    p=-++d/2;
    m=++a*b-c%4+d;
    printf("%d",p);
    printf("%d",m);
}