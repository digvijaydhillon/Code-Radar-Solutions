#include<stdio.h>
int main(){
    int p;
    scanf("%d",&p);
    for(int a = 1; a <= p; a++){
        for(int b = p - a; b >= 1; b--){
            printf(" ");
        }
        for(int c = 1; c <= 2*a - 1; c++){
            printf("*");
        }
        printf("\n");
    }
    for(int d = p - 1; d >= 1; d--){
        for(int e = 1; e <= p - d; e++){
            printf(" ");
        }
        for( int f = 1; f <= 2*d - 3; f++){
            printf("*");
        }
        printf("\n");
    }
}