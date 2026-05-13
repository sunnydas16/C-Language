#include<stdio.h>
int main(){

    float f = 23.5;

    char *cp;
    cp=(char *)&f;

    int i,pos;

    cp = cp+3;

    for(i=0;i<4;i++){
        for(pos=7;pos>=0;pos--){
            printf("%d",*cp>>pos&1);
            if(pos%4==0)
            printf(" ");
        }
        cp--;
    }
    
    
    
    return 0;
}