#include<stdio.h>

char * my_strrev(char *);
char * my_strrev1(char *,char *);
char * my_strchr(char *,char);

int main(){

    char s[100],*p,*q;
    printf("Enter the Char ");
    scanf("%[^\n]", s);

    p=s;
    while(q=my_strchr(p, ' ')){
        my_strrev1(p, q-1);
        p=q+1;
    }
    my_strrev(p);
    printf("%s\n", s);

    return 0;
}
char * my_strchr(char *s, char ch){

    while(*s){
        if(*s==ch)
            return s;
        s++;
    }
    return NULL;
}


char * my_strrev1(char *s,char *q){
    char t;
    while(s<q){
        t = *s;
        *s = *q;
        *q = t;
        s++;
        q--;
    }
}

char * my_strrev(char *s){

    char *q,t;
    q=s;
    while(*q++){
    }
    q-=2;

    while(s<q){
        t = *s;
        *s = *q;
        *q = t;
        s++;
        q--;
    }

}


