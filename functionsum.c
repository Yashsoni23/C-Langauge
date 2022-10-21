#include <stdio.h>
int sum(int a, int b);
void printTable(int x);

int main()
{
    ints x;
    // printf("enter the first number:\n");
    // scanf("%d", &a);
    // printf("enter the second number:\n");
    // scanf("%d", &b);
     printf("enter the third number:\n");
    scanf("%d", &x);

    // int s = sum(a, b);
    // printf("sum is %d", s);
    

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
void printTable(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", x * i);
    }
}
