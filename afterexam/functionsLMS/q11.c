#include<stdio.h>
char * my_strchr(char *, char);
void rev_word_fun(char *);
int count_word_fun(char *);
char * my_strrev1(char *, char *);
int main(){

    char s[100];
    printf("Enter the String ");
    scanf("%[^\n]", s);

    int count=0;
    char *p,*q,*c;
    p=s;

    while(q=my_strchr(p, ' ')){
        my_strrev1(p, q-1);
        p=q+1;
    }
    rev_word_fun(p);
    count = count_word_fun(s);

    printf("%s \n", s);
    printf("count is %d ", count);
    



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
void rev_word_fun(char *s){
    char *q,t;
    q=s;
    while(*q++);
    q-=2;
    while(s<q){
        
        t=*s;
        *s=*q;
        *q=t;
        s++;
        q--;
    }
}
char * my_strrev1(char *s, char *q){
    char t;
    while(s<q){
        t=*s;
        *s=*q;
        *q=t;
        s++;
        q--;
    }
}
int count_word_fun(char *s){
    int count=0;
    while(*s){

        int has_digit=0;

        while(*s&&*s!=' '){
            if(*s>='0'&&*s<='9'){
                has_digit=1;
            }
            s++;
        }
        if(has_digit){
            count++;
        }
        if(*s==' '){
            s++;
        }
    }
    return count;
}

