#include<stdio.h>
#include<string.h>
void print(char *);
int my_strlen(char *);
char * my_strcpy(char *,char *);
char * my_strcat(char *,char *);
char * my_strchr(char *,char);
int my_strcmp(char *,char *);
char * my_strstr(char *,char *);
char * my_strrev1(char *,char *);
void my_strrev(char *);
int main(){

    char s[100],d[100],ch;
    printf("Enter the String ");
    scanf("%[^\n]",s);
    scanf(" %s",d);

    char *p,*v,*q;
    p=s;
    v=s;


    while(q=my_strchr(p, ' ')){
        while(*v){
            if(*v>='0'&&*v<='9'){
                my_strcpy(p, q+1);
                v=q+1;
                p=q+1;
            }
            v++;
        }
    }

    
    printf("%s", s);

    
    
    printf("\n");
    return 0;
    // while(q=my_strchr(v, ' ')){
    //     if(*v>='0'&&*v<='9'){
    //         my_strcpy(p, q+1);
    //     }
    //     v++;
    //     p=q+1;
    // }

    // char *p,*q;
    // p=s;
    // while(q=my_strchr(p, ' ')){
    //     my_strrev1(p,q-1);
    //     p=q+1;
    // }
}

void my_strrev(char *s){

    char t,*q;
    q=s;
    while(*q++);
    q-=2;

    while(s<q){
        t = *s;
        *s= *q;
        *q= t;
        s++;
        q--;
    }

}


char * my_strrev1(char *s,char *q){
    char t;
    while(s<q){
        t=*s;
        *s=*q;
        *q=t;
        s++;
        q--;
    }
}
char * my_strstr(char *s,char *d){
    int i,j;
    for(i=0;s[i];i++){
        for(j=0;d[j];j++){
            if(s[i+j]!=d[j]){
                break;
            }
        }
        if(d[j]=='\0'){
            return &s[i];
        }
    }
    return NULL;
}
int my_strcmp(char *s, char *d){
    while(*s){
        if(*s!=*d)
            return *s-*d;
        s++;
        d++;
    }
    return 0;
}
char * my_strchr(char *s, char ch){
    while(*s){
        if(*s==ch)
            return s;
        s++;
    }
    return 0;
}
char * my_strcat(char *d,char *s){
    while(*d){
        d++;
    }
    while(*s){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}
char * my_strcpy(char *d,char *s){
    while(*s){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}
int my_strlen(char *s){
    int len;
    for(len=0;s[len];len++);
    return len;
}
void print(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
}
