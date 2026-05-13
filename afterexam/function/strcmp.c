#include<stdio.h>

int my_strcmp(char *,char *);

int main(){

    char s[100],s2[100];
    printf("Enter the String1 ");
    scanf("%s", s);
    printf("Enter the String1 ");
    scanf("%s", s2);

    int val;
    val = my_strcmp(s,s2);

    if(val==0)
    printf("EQUAL\n");
    else 
    printf("NOT EQUAL %d\n", val);

    return 0;
}

int my_strcmp(char *s,char *s2){
    int i;
    for(i=0;s[i];i++){
        if(s[i]!=s2[i]){
            break;
        }
    }
    return s[i]-s2[i];
    // if(s[i]==s2[i])
    // return s[i]-s2[i];
    // else if(s[i]>s2[i])
    // return s[i]-s2[i];
    // else if(s[i]<s2[i])
    // return s[i]-s2[i];
    
}