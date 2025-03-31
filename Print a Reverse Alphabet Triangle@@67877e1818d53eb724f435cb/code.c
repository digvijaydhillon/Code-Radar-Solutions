#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = a; i >= 0; i--){
        for(int j = 'A'; j <= 'A' + i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}