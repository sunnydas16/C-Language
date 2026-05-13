#include<stdio.h>
int main(){

    int i = 260;

    int *p;
    char *q;

    p=&i;
    q=&i;

    printf("int pointer fetching = %d \n", *p);
    
    printf("Char pointer fetching = %d \n", *q);

    return 0;
}