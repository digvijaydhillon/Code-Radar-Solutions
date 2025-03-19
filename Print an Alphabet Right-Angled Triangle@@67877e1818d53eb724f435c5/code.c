#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++)
        {
            printf("%d", ch);
        }
        printf("\n");
    }
}