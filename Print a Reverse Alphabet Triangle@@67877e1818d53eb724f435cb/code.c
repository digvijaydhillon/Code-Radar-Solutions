#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = a; i >= 1; i--){
        for(int j = 'A'; j <= i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}