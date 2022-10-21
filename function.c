#include <stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter the f for french and enter the i for indian:\n");
    char ch;
    scanf("%c",&ch);

    if(ch =='i'){
        namaste();
    }
    else if (ch == 'f')
    {
        bonjour();
    }
    else{
        printf("sorry this not match with data");
    }
    
}

void namaste(){
    printf("Namaste!!!");
}
void bonjour(){
    printf("Bonjour!!!");
}
