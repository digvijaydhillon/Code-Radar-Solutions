#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}