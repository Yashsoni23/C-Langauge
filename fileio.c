#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w"); // fopen(file name ,mode);
    //we have four type of modes are available r,rb,w,wb,a

    //FOR PRINT FILE VALUES
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');
    // fclose(fptr);


    //FOR READ VALUES 
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character =  %c \n", ch);
    // fscanf(fptr, "%c", &ch);

    // printf("character =  %c \n", ch);
    // fscanf(fptr, "%c", &ch);

    // printf("character =  %c \n", ch);
    // fscanf(fptr, "%c", &ch);

    // printf("character =  %c \n", ch);
    // fscanf(fptr, "%c", &ch);

    // printf("character =  %c \n", ch);
    // fscanf(fptr, "%c", &ch);

    // fclose(fptr);


    //FGETS,FPUTC
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));

    //Fputc
    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);




    // if(fptr == NULL){
    //     printf("File doesn't exist ");
    // }else{
    //     printf("File is Here;");
    // }

    // printf("%s",fptr);
    // fclose(fptr);
}