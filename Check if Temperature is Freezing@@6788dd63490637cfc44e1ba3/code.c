#include <stdio.h>

int main(){
    int a;
    scnaf("%d",&a);
    if(a<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
}