#include <stdio.h>
void printHW(int count);
int sum(int n);


int main(){
    // printHW(8);
    // return 0;
    printf("sum is %d \n",sum(9));
    return 0;
}

void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello world \n");
    printHW(count-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
