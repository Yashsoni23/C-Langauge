#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    
    int a;
    fscanf(fptr,"%d",&a);
    printf("%d\t",a);
    int b;
    fscanf(fptr,"%d",&b);
    printf("%d\t",b);


    fclose(fptr);

    fptr = fopen("sum.txt","w");
    fprintf(fptr,"%d",a+b);
    printf("%d",a+b);
    fclose(fptr);

    return 0;
}