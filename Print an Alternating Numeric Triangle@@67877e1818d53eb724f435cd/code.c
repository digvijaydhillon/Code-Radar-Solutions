#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= i; j++){
                if(j % 2 != 0){
                    printf("1 ");
                }
                else if(j % 2 == 0){
                    printf("0 ");
                }
            }
        }
        else if(i % 2 == 0){
            for(int k = 1; k <= i; k++){
                if(k % 2 != 0){
                    printf("0 ");
                }
                else if(k % 2 == 0){
                    printf("1 ");
                }
            }
        }
        
        printf("\n");
    }
}