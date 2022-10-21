#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);
void countVowels(char str[]);
void checkChar(char str[], char ch);

int main()
{
    char str[100] = "HelloWorld";
    // char str[100] = "Yash";
    // char str[100] = "Gaytri";
    // char str[100] = "Vijay";

    // slice(str, 3, 6);
    // countVowels(str);
    checkChar(str, 'y');
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("char is presented");
            return;
        }
    }
    printf("char is not presented");
    return;
}

void slice(char str[], int n, int m)
{
    int i = n, j = 0;
    char newStr[100];

    for (i, j; i < m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

void countVowels(char str[])
{
    int count = 0;
    int i = 0;
    for (i; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o')
        {
            count++;
        }
    }
    printf("%d", count);
}
