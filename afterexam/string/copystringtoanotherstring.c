#include<stdio.h>
int main(){

    char s[20],s2[20];

    printf("Enter String ");
    scanf("%s", s);

    int i;
    for(i=0;s[i];i++){
        s2[i]= s[i];
    }
    s2[i]=s[i];

    printf("Copied string is %s \n", s2);

    return 0;
}