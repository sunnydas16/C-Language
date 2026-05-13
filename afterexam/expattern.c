#include<stdio.h>
int main(){

    int row,i,j,k,n,v=29,ch = 'B',c;
    printf("Enter The Row : ");
    scanf("%d", &row);

    for(i=0;i<row;i++){
        n = v;
        c = ch;
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<row-i;k++){
            if(i%2==0){
                printf("%d ", n +(k*3));
                n = n+(k*3);
                if(k==1){
                    v = n;
                }
            }
            else{
                printf("%c  ", c);
                c = c+k+2;
                if(k==0){
                    ch = c;
                }
            }
        }

        printf("\n");
    }

    

    return 0;
}