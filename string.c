#include <stdio.h>
void printstring(char arr[]);

int main()
{
    char str[3];
      char name[5] = {'Y', 'a', 's', 'h' };//'\0'
    char firstname[] = "yash";
    char lastname[] = "soni";
    fgets(str, 3, stdin); // fgets(str,n - 1,stdin);
    // puts(str);
    // printstring(firstname);
    printstring(name);

    // char yourname[50];
    // scanf("%s",yourname);
    // printf("%s",yourname);

    printf("name of you entered >> %s", firstname);
    return 0;
}

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) //its runing till  it can see null char
    {
        {
        printf("%c", arr[i]);}
        printf("\n");

    }
}
