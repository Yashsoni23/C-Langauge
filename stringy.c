#include <stdio.h>
#include <string.h>
// void printString(char arr[i]);
// int countLength(char arr[]);

void newPassword(char password[]);
int main()
{
    // char str[100];
    // fgets(str,100,stdin);
    // gets(str);
    // puts(str);

    // // 1.] strlen(str)
    // char name[100];
    // fgets(name,100,stdin);
    // printf("length is %d",strlen(name)); // prints length of string

    //// 2.] strlen(newstr,oldstr)
    // char oldString[] = "Yash simeijya";
    // char newString[] = "Yash soni";

    // puts(newString);
    // puts(strcpy(newString,oldString));

    // // 3.] strcatfirststr,secstr);
    //     char  firstString[50] = "Hello";
    //     char secString[] = " World";
    //     strcat(firstString,secString);
    //     puts(firstString);

    // // 4.] strcmpfirststr,secstr);
    // char firstStr[] = "Apple";
    // char  secStr[] = "Banana";
    // // printf("%d\n",strcmp(firstStr,secStr));
    // printf("%d\n",strcmp(firstStr,secStr));
    // char a[] = "Apple"; // because a's ASCII value is 65 where b's 66 so out put comes -1
    // char b[] = "Banana";
    // printf("%d\n",strcmp(a,b));

    //     char str[100];
    //     char ch;
    //     int i = 0;
    //     while(ch!='\n'){
    //         scanf("%c",&ch);
    //         str[i] = ch;
    //         i++;
    //     }
    //     str[i] = '\0';
    //     puts(str);

    //     return 0;

    char str[100] = "who are you???";
    printf("%c", str[0]);

    // char password[100];
    // scanf("%s", password);
    // newPassword(password);
    // puts(newPassword(password));
}

// int countLength(char arr[]){
//     int count =0;
//     for (int i = 0; arr[i] !='\0'; i++)
//     {
//         count++;
//     }
//         return count -1;

// }

void newPassword(char password[])
{
    char pass[100];
    char salt[] = "123";

    strcpy(pass, password);
    strcat(pass, salt);
    puts(pass);
}
