int isPrime(int a);
int count;
int isPrime(int a){
    for(int m = 1; m <= a; m++){
        if(a % m == 0){
            count++ ;
        }
        else{
            continue;
        }
    }
    if(count == 2 ){
        return 1;
    }
    else if(count != 2){
        return 0;
    }
}