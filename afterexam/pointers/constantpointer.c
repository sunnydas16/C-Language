#include<stdio.h>
int main(){

    int i = 20;

    int * const p = &i;
    // p = &i;          assining is invalid

    p = p+1;       // invalid

    printf("constant pointer %u \n", p);


    return 0;
}