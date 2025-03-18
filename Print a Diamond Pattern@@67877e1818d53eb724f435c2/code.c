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
    for(int n=a-1;n>=1;n--){
        for(int m=1;m<=n-1;m++){
            printf(" ");
        }
        for(int o=1;o<=a*2-3;o++){
            printf("*");
        }
        printf("\n");
    }
}