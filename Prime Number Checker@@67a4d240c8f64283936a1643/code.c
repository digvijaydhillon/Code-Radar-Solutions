#include<stdio.h>
int isPrime(int a);
int main(){
    int arr[10];
    int num;
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j < num; j++){
        printf("%d", isPrime(arr[j]));
    }
    return 0;
}
int isPrime(int a){
    int count;
    for(int m = 1; m <= a, m++){
        if(a % m == 0){
            count++ ;
        }
    }
    if(count == 2 ){
        return 1;
    }
    else if(count != 2){
        return 0;
    }
}