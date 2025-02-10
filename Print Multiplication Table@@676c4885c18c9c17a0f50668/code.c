#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum;
    for(int i=1;i<=10;i++){
        sum = a*i;
        printf("2 x %d = %d \n",i,sum);
    }
    return 0;
}