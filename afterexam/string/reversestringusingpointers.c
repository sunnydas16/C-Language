#include<stdio.h>
int main(){

    char s[20] = "sunny",t;

    int len;x
    for(len=0;s[len];len++);

    char *cp,*cp2;
    cp=s;
    cp2=cp+len-1;

    while(cp<cp2){
        t = *cp;
        *cp = *cp2;
        *cp2 = t;
        cp++;
        cp2--;
    }

    printf("%s\n",s);

    return 0;
}