#include<stdio.h>
int main(){

    int i = 260;

    char *p;
    p = (char *)&i;
    printf("*p = %d \n",i);

    *p = *p+3;
    p = p+1;
    *p = *p+2 ; 
        
    printf("*p = %d \n",i);

    return 0;
}