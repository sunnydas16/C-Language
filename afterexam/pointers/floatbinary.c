#include<stdio.h>
int main(){

    float f = 23.5;
    int pos;

    int *ip;
    float *fp;
    
    ip=(int *)&f;
    fp=&f;

    printf(" Float fp = %f \n", *fp);
    printf(" int   ip = %d \n", *ip);

    printf("Binary of float value : ");
    for(pos=31;pos>=0;pos--){
        printf("%d", *ip>>pos&1);
        if(pos%4==0)
        printf(" ");
    }

    return 0;
}