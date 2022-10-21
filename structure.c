#include <stdio.h>
#include <string.h>
 struct student
    {
        char name[100];
        int roll;
        float cgpa;
    };


void printInfo(struct student s1 );


int main()
{
   
    //    struct student s1;
    //     s1.roll = 6;
    //     s1.cgpa = 9.9;
    //     strcpy(s1.name,"yash");

    //     printf("student 1 name = %s\n",s1.name);
    //     printf("student 1 roll = %d \n",s1.roll);
    //     printf("student 1 cgpa = %f\n",s1.cgpa);

    //      struct student s2;
    //     s2.roll = 61;
    //     s2.cgpa = 3.3;
    //     strcpy(s2.name,"raj");

    //     printf("student 2 name = %s\n",s2.name);
    //     printf("student 2 roll = %d \n",s2.roll);
    //     printf("student 2 cgpa = %f\n",s2.cgpa);

    //      struct student s3;
    //     s3.roll = 611;
    //     s3.cgpa = 9.2;
    //     strcpy(s3.name,"om");

    //     printf("student 3 name = %s\n",s3.name);
    //     printf("student 3 roll = %d \n",s3.roll);
    //     printf("student 3 cgpa = %f\n",s3.cgpa);

    // struct student IT[30];
    // IT[0].roll = 141;
    // IT[0].cgpa = 9.9;
    // strcpy(IT[0].name, "Varun");

    // printf("%s\n%d\n%f\n", IT[0].name, IT[0].roll, IT[0].cgpa);



    // Pointer in C
    // struct student s1 = {"Yash", 7654, 9.0};

    // printf("The roll no of student one is: %d \n",s1.roll);

    // struct student *b = &s1;
    // printf("The roll no of student one is : %d \n ",(*b).roll); //with dot operator 
    // printf("The roll no of student one is : %d \n ",b->roll); //without dot(.) oparetor
    // printInfo(s1);


    // s1.roll = 1660;
    // printf("%d",s1.roll);
        return 0;
}



void printInfo(struct student s1 ){
    printf("The name of student is %s \n",s1.name);
    printf("The name of student is %d \n",s1.roll);
    printf("The name of student is %f \n",s1.cgpa);
    s1.roll = 1660;
}
