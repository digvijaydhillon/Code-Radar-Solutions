#include <stdio.h>

int main(){
    char a;
    scanf("%d",&a);
    if (a>="0"&&a<="9"){
        printf("digit");
    }
    else if (a=="a"||a=="e"||a=="i"||a=="o"a=="u"){
        printf("Vowel");
    }
    else if (a>="a"&&a<="z"){
        printf("Consonant");
    }
    else{
        printf("special charater");
    }

}