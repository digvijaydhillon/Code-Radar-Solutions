#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        if(b=0){
            printf("False");
        }
        else{
        printf("True");
        }
    }
    else if(a<b){
        if(a=0){
            printf("False");
        }
        else{
        printf("True");
        }
    }
    else{
        printf("True");
    }
    return 0;
}