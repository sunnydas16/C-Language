#include<stdio.h>
int main(){

    int i,j,pos;
    unsigned int num,n,m,val,o,p;

    printf("Enter the Number ");
    scanf("%d", &num);
    printf("Enter Nibble ");
    scanf("%d", &val);

    for(pos=31;pos>=0;pos--){
        printf("%d", num>>pos&1);
        if(pos%8==0)
        printf(" ");
    }

    val = val*8;

    n = num & ((1<<val)-1);

    o = num>>(val+8);
    p = o<<val;

    num = n | p;
    
    printf("\n");
    for(pos=31;pos>=0;pos--){
        printf("%d", num>>pos&1);
        if(pos%8==0)
        printf(" ");
    }

    return 0;
}