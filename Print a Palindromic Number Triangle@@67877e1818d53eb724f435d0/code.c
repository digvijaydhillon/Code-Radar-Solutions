#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < i-1 ; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%d",k);
        }
        for(int l = 1; l <= i; l++){
            printf("%d",k);
        }
    }
}