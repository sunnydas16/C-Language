#include<stdio.h>
int binpri(int);
int main(){

    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);

    binpri(i);
    binpri(j);
    binpri(k);

    return 0;
}
int binpri(int n){

    static int pos=31;

    if(pos>=0){
    printf("%d ",n>>pos&1);
    pos--;
    binpri(n);
    }
    if(pos==-1){
        pos=31;
        printf("\n");
    }
    
}
