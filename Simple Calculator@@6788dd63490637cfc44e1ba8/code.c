#include <stdio.h>
int main(){
    int a,b;
    char c;
    float division ;
    division = a/b;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
     else if(c=='/'&&b!=0){
        printf("%f",division);
    }
    else {
        printf("error");
    }
}