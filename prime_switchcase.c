// Prime Number using SWITCH CASES;

#include <stdio.h>
void main(){
    int a,n;
    printf("Enter a num = ");
    scanf("%d",&n);
    switch(n){
        case 0:
        printf("Not valid");
        break;

        case 1:
        printf("Neither Prime nor Composite");
        break;
    }
    for(int i=2;i<=n;i++){
        switch(n%i){
            case 0:
            printf("COmposite");
            break;

            default:
            printf("Prime");
            break;
        }
        break;
    }
}