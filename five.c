#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :\n");
    scanf("%c",&ch);

    if(ch >='A' && ch <='Z'){
        printf("UpperCase");

    }else{printf("LowerCase");}
}