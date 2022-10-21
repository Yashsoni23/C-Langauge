#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt","w");


    char name[100];
    int roll;
    float cgpa;

    printf("Enter the name of the student: ");
    scanf("%s",name);
    printf("Enter the roll no of the student:\n ");
    scanf("%d",&roll);
    printf("Enter the  cgpa of their student:\n ");
    scanf("%f",&cgpa);

    fprintf(fptr,"student name = %s \n",name);
    fprintf(fptr,"student roll = %d \n",roll);
    fprintf(fptr,"student cgpa = %f \n",cgpa);

    fclose(fptr);


    return 0;
}