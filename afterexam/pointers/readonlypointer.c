#include<stdio.h>
int main(){

    int i = 10,j=20;

    int const *p;  //read only pointer; data is fixed;
    p=&i; 

    *p = j;       //invalid

    printf("*p is %d", *p);

        return 0;
}