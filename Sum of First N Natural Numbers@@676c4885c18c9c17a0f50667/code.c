#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum;
    sum=0;
    for(int i=0;i<=a;i++){
        sum = sum+i;
    }
    printf("%d";sum);
    return 0;
}
