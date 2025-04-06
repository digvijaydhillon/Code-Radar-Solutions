int isPrime(int a);

int isPrime(int a){
    int count;
    for(int m = 1; m <= a; m++){
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