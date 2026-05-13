#include<stdio.h>
int main(){

    double d = 25.5;
    int i,pos;

    short int *p=(short int *)&d;

    p = p+3;

    for(i=0;i<4;i++){
        for(pos=15;pos>=0;pos--){
            printf("%d", *p>>pos&1);
            if(pos%8==0)
            printf(" ");
        }
        p--;
    }
    
    
    return 0;
}