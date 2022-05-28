#include <stdio.h>

void main(){
    int n, i, count;
    printf("enter the range:");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++){
        count = 0;
        for (i = 1; i <= j; i++){
            if(j % i == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d\n", j);
        }
    }
}
