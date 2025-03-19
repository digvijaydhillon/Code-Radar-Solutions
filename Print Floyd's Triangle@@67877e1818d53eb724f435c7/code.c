#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int k = 1;
    for(int i = 1 ; i <= a ; i++){
        for(; k <= i + 1; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}