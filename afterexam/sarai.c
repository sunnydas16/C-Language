#include<stdio.h>
#include<string.h>
char * my_strchr(char *,char);
char * my_strrev(char *);
char * my_strrev1(char *,char *);
char * my_strcpy(char *,char *);
int main(){

    char s[100],sb[100];
    printf("Enter the Char ");
    scanf("%[^\n]", s);
    scanf(" %s",sb);

    char *p,*q;
    p=s;

    q=strstr(p, sb);
    my_strcpy(q, q+1);

    printf("%s ", s);


    return 0;
}
char * my_strchr(char *p, char ch){
    while(*p){
        if(*p==ch)
            return p;
        p++;
    }
    return NULL;
}
char * my_strcpy(char *d, char *s){
    
    while(*s){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}

char * my_strrev1(char *s, char *d){
    char t;
    while(s<d){
        t=*s;
        *s=*d;
        *d=t;
        s++;
        d--;
    }
}
char * my_strrev(char *s){

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



//     short int num=0xABCD;
// char *p=&num;
// printf("%d \n",*p);
// printf("%o \n",*p);
// printf("%x \n",*p);

//     int num=400;
// unsigned char *p=&num;
// printf("%d \n",*p);
// printf("%o \n",*p);
// printf("%x \n",*p);

//     int num=-300;
// unsigned char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
