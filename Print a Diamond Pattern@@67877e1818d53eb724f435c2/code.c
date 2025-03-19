#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int m=a-1;m>=1;m--){
        for(int n=1;n<=a-m;n++){
            printf(" ");
        }
        for(int o=1;o<=m*2-1;o++){
            printf("*");
        }
        printf("\n");
    }
}