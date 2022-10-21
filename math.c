#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circleearea(float rad);
float rectenglearea(float a, float b);


int main(){
    // int a =4;
    // printf("%f",pow(a,2));
    float a= 5.0;
    float b = 10.0;
    float side = 6.0;
    float rad = 2.5;


    printf("area of rectengle is : %f \n",rectenglearea(a,b));
    printf("area of square is  : %f \n",squarearea(side));
    printf("area of circle is  : %f \n",circleearea(rad));
    return 0;
    
}

float squarearea(float side){
 return side * side;

}
float circleearea(float rad){
    return 3.14 *rad*rad;
}

float rectenglearea( float a,float b){
    return a*b;
}
