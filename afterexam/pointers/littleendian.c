#include<stdio.h>
int main(){

    int i = 10;
    char *p;
    p = (char *)&i;

    if(i == *p)
    printf("Little endian %d", *p);
    else
    printf("Big endian %d", *p);
    
    return 0;
}