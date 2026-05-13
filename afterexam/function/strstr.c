#include<stdio.h>
char * my_strstr(char *,char *);
int main(){

    char s[100],sb[100];
    printf("String is ");
    scanf("%[^\n]", s);
    printf("Substring ");
    scanf(" %[^\n]", sb);

    char *val;
    val = my_strstr(s,sb);

    if(val)
    printf("FOUND %s\n",sb);
    else
    printf("NOT FOUND\n");


    return 0;
}

char * my_strstr(char *s,char *sb){

    int i,j;
    for(i=0;s[i];i++){
        for(j=0;sb[j];j++){
            if(s[i+j]!=sb[j])
            break;
        }
        if(sb[j]=='\0')
        return &s[i];
    }
    return NULL;
}