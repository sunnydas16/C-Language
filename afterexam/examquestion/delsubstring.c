#include<stdio.h>
#include<string.h>
int main(){

    char s[100],s2[20],*p,*q;
    printf("Enter the Char : ");
    scanf("%s", s);
    printf("Entr the char to del : ");
    scanf("%s", s2);

    p=strstr(s,s2);
    strcpy(p,p+strlen(s2));
    printf("%s \n", s);


    return 0;
}
