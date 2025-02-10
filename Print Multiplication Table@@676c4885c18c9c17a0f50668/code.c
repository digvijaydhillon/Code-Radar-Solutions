#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum;
    for(int i=1;i<=10;i++){
        sum = a*i;
        printf("%d x %d = %d \n",a,i,sum);
    }
    return 0;
}