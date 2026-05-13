#include<stdio.h>
int main(){

    char s[5];

    printf("Enter the String ");
    scanf("%s", s);

    int i,len,j;
    for(i=0;s[i];i++);

    len =i;

    for(i=0,j=len-1;i<j;i++,j--){
        s[i]=s[j];
    }

    printf("%s", s);


    return 0;
}