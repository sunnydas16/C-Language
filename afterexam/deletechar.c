#include<stdio.h>
char * my_strchr(char *,char);
char * my_strcpy(char *,char *); //d, s

int main(){

    char s[100],ch,*p,*q;
    printf("Enter the string ");
    scanf("%[^\n]", s);
    printf("Enter the char ");
    scanf(" %c",&ch);

    p=s;
    while(q=my_strchr(p, ch)){
        my_strcpy(q, q+1);
    }


    printf("%s\n", s);


    return 0;
}
char * my_strcpy(char *d, char *s){

   
    while(*s){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
    
}

char * my_strchr(char *s, char ch){
    while(*s){
        if(*s==ch)
            return s;
        s++;
    }
    return NULL;
}