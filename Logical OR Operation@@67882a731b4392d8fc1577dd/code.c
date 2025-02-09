#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        if(b>0){
            printf("True");
        }
        else{
        printf("False");
        }
    }
    else if(a<b){
        if(a>0){
            printf("True");
        }
        else{
        printf("False");
        }
    }
    else{
        printf("False");
    }
    return 0;
}