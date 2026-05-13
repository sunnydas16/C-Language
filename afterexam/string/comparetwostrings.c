#include<stdio.h>
int main(){

    char s[20],s2[20];
    
    printf("Enter the String 1 ");
    scanf("%s", s);
    printf("Enter the String 2 ");
    scanf("%s", s2);

    int i;

    for(i=0;s[i]&&s2[i];i++){
        if(s[i]!=s2[i])
        break;
    }
    if(s[i]==s2[i])
    printf("Strings are equal \n");
    else
    printf("Not Equal \n");

    return 0;
}