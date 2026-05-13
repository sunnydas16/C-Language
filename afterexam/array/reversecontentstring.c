#include<stdio.h>
int main(){

    char arr[5],t;

    printf("Enter the String : ");
    scanf("%[^\n]", arr);

    int i,len,j;
    for(i=0;arr[i];i++);
    len = i;

    char *p,*q;
    p=arr;

    q=p+(len-1);

    while(p<q){
        t=*p;
        *p=*q;
        *q=t;
        p++;
        q--;
    }

    printf("%s", arr);

    return 0;
}