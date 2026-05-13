#include<stdio.h>
int main(){

    char s[20] = "sunny",t;

    int len,i,j;
    for(len=0;s[len];len++);

    for(i=0,j=len-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            t = s[i];
            s[i]=s[j];
            s[j]= t;
        }
    }

    printf("%s ",s);
 

    return 0;
}