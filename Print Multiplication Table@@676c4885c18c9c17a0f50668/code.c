#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum;
    sum = 1;
    for(int i=1;i<=10;i++){
        sum = sum*i;
        printf("2 x %d = %d",i,sum);
    }
    return 0;
}