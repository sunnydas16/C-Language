#include<stdio.h>
int main(){

    unsigned int num = 0x67;
    int pos,m,n,o,p;
    

    for(pos=7;pos>=0;pos--){
        printf("%d", num>>pos&1);
        if(pos%2==0)
        printf(" ");
    }
    
    m = num&0x55;
    n = num&0xAA;
    
    m = m<<1;
    n = n>>1;

    num = m | n;
    

    
    printf("\n");
    for(pos=7;pos>=0;pos--){
        printf("%d", num>>pos&1);
        if(pos%2==0)
        printf(" ");
    }
    return 0;
}