#include<stdio.h>
int main(){

    int i = 10;

    int *p;
    p=&i;

    printf("Before address is %u \n", p);
    
    p=p+1;

    printf("After  address is %u \n", p);
   
    return 0;
}