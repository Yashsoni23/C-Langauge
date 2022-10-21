#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[10];
    float cgpa;
    int roll;

} std;

struct address
{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
};
void printAdd(struct address adds);

struct vector
{
    int x;
    int y;
    int sum;
};
void calSumVec(struct vector v1, struct vector v2, struct vector sum);
struct complex
{
    int real;
    int img;
};

typedef struct BankAccount{
    int Account_no;
    char name[100];
    
}acc;
int main()
{
    acc no1 = {123,"Yash"};
    acc no2 = {153,"Raj"};
    printf("%d \n %s \n",no1.Account_no,no1.name);
    printf("%d \n %s \n",no2.Account_no,no2.name);

    // struct student st1 ;
    // strcpy(st1.name,"Yash");
    // printf("%s",st1.name);

    // struct address adds[5];
    // printf("Enter the address of person 1 : \n");
    // scanf("%d",&adds[0].houseno);
    // scanf("%d",&adds[0].blockno);
    // scanf("%s",adds[0].city);
    // scanf("%s",adds[0].state);

    // printf("Enter the address of person 2 : \n");
    // scanf("%d",&adds[1].houseno);
    // scanf("%d",&adds[1].blockno);
    // scanf("%s",adds[1].city);
    // scanf("%s",adds[1].state);

    // printf("Enter the address of person 3 : \n");
    // scanf("%d",&adds[2].houseno);
    // scanf("%d",&adds[2].blockno);
    // scanf("%s",adds[2].city);
    // scanf("%s",adds[2].state);

    // printf("Enter the address of person 4 : \n");
    // scanf("%d",&adds[3].houseno);
    // scanf("%d",&adds[3].blockno);
    // scanf("%s",adds[3].city);
    // scanf("%s",adds[3].state);

    // printf("Enter the address of person 5 : \n");
    // scanf("%d",&adds[4].houseno);
    // scanf("%d",&adds[4].blockno);
    // scanf("%s",adds[4].city);
    // scanf("%s",adds[4].state);

    // printAdd(adds[0]);
    // printAdd(adds[1]);
    // printAdd(adds[2]);
    // printAdd(adds[3]);
    // printAdd(adds[4]);

    // struct vector v1 = {5,7};
    // struct vector v2 = {3,10};
    // struct vector sum;
    // sum.sum = 0;

    // calSumVec(v1,v2 ,sum);

    // struct complex number1 = {5, 8};
    // struct complex *ptr = &number1;
    // printf("%d \n", ptr->real);
    // printf("%d \n ", ptr->img);



    return 0;
}

void printAdd(struct address adds)
{
    printf("address is:- %d\n %d \n %s \n %s \n", adds.houseno, adds.blockno, adds.city, adds.state);
}

void calSumVec(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("%d \n", sum.x);
    printf("%d \n", sum.y);
}
