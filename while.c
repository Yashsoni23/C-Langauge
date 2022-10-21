#include <stdio.h>
int main()
{
    int number;

    printf("enter the number :\n");
    scanf("%d", &number);
    int sum = 0;

    for (int i = 1, j = number; i <= number && j >= 1; i++, j--)
    {
        sum += i;
        printf("%d\n", i);
    }
    printf("sum %d = ", sum);
}