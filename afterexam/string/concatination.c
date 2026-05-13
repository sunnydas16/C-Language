#include<stdio.h>
int main(){

    char s[20],s2[20];

    printf("Enter String 1 ");
    scanf("%s", s);
    printf("Enter the String 2 ");
    scanf("%s", s2);

    int len,i,j;

    for(len=0;s[len];len++);

    for(i=len,j=0;s[j];i++,j++){
        s[i]=s2[j];
    }
    s[i]=s2[j];

    printf("Concatinated String : %s \n", s);

    return 0;
}