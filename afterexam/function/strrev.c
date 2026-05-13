#include<stdio.h>

char * my_strrev(char *);

int main(){

    char s[100];
    printf("Enter the String ");
    scanf("%[^\n]", s);

    char *val;
    val = my_strrev(s);

    printf("%s", val);

    return 0;
}

char * my_strrev(char *s){
    char t;
    int i,j,len;
    for(len=0;s[len];len++);
    for(i=0,j=len-1;i<j;i++,j--){
        t = s[i];
        s[i]=s[j];
        s[j]=t;
    }
    return s;
}