#include<stdio.h>
int fib(int n);

int main(){
    printf("%d\n",fib(9));
    return 0;
}



int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fibN = fib1 + fib2;
    return fibN;
}