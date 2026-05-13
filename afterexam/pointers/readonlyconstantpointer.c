#include<stdio.h>
int main(){

    int i = 10;

    int const * const p = &i;

    // *p=34;    invalid
    // p=p+2;    invalid

    printf(" *p=%d and p=%u \n", *p, p);

    return 0;
}