#include <stdio.h>
#include <stdlib.h>
int main(){

    //Size of function for checking size of data types
    // printf("%d\t",sizeof(int));
    // printf("%d\t",sizeof(float));
    // printf("%d\t",sizeof(char));
    //ex.1 of malloc function
    // int *ptr;
    // ptr = (int*)malloc(5* sizeof(int));
    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 4;
    // ptr[3] = 5;
    // ptr[4] = 6;

    // for (int  i = 0; i < 5; i++)
    // {
    //     printf("%d \n",ptr[i]);

    // }
    
    //ex.2
    // float *ptr1;
    // ptr1 = (float*)malloc(5*sizeof(float));
    // ptr1[0] = 1.2;
    // ptr1[1] = 2.2;
    // ptr1[2] = 3.2;
    // ptr1[3] = 4.2;
    // ptr1[4] = 5.2;


    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.4f \n",ptr1[i]);
    // }
    

    //ex.3 calloc function
    // int *b;
    // float *c;
    // b = (int*)calloc(5,sizeof(int));
    // c = (float*)calloc(5,sizeof(float));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d \t \n",b[i]);
    //     printf("%f \t \n ",c[i]);
    // }
    


    //ex.5
    int *a ;
    int n;
    printf("eneter n :\n");
    scanf("%d \n",&n);

    a = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    


    return 0;
}