#include<stdio.h>
float convertTamp(float celsius);
int main(){
    float far = convertTamp(37);
printf("far : %f",far);
return 0;
}

float convertTamp(float celsius){
    if(celsius==0){
        return 1;
    }
    float far = celsius*(9.0/5.0)+32;
    return far;
}
