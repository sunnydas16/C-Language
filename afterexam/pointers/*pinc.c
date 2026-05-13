#include<stdio.h>
int main(){

    int i = 260;

    int *p;
    int *q;
    p = &i;
    q = (char *)&i;

    *p = *p+1;
    *q = *q+1;
    
    printf("int  *p is %d \n", *p);
    printf("char *q is %d \n", *q);
   
    return 0;
}