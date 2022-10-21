#include<stdio.h>
int persentage(int science,int math,int sanskrit);
int main(){

    int science =87;
    int math =97;
    int sanskrit =57;
    printf("persentage of all subject is :%d",persentage(89,98,97));

    return 0;
}

int persentage(int science,int math,int sanskrit){
    return(science+math+sanskrit)/3;

}