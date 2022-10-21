#include <stdio.h>
int main()
{
    int x;
    printf("enter number : \n");
    scanf("%d", &x);

    printf("%d", x % 2 == 0);

    int age;
    printf("enter the age :");
    scanf("%d",&age);

    age >= 18 ? printf("adult") : printf("not drive");
}