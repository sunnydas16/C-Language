#include<stdio.h>

char * my_strcat(char *,char *); 

int main(){

    char s[100],d[100];
    printf("Enter the string ");
    scanf("%s %s", s,d);

    char *p;
    p=my_strcat(d,s);
    printf("%s", p);


    return 0;
}

char * my_strcat(char *d,char *s){
    int i,j,len;
    for(len=0;d[len];len++);
    for(i=0,j=len;s[i];i++,j++){
        d[j]=s[i];
    }
    d[j]='\0';

    return d;
}