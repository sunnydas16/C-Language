#include<stdio.h>
int main(){

    int i=100,j=20,t;

    int * p, *q;
    p = &i;
    q = &j;

    printf("Before Swap *p=%d *q=%d \n", *p,*q);

    t  = *p;
    *p = *q;
    *q = t;

    printf("After Printing *p=%d and *q=%d \n",*p,*q);

    return 0;
}