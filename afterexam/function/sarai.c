#include<stdio.h>

void print(int *,int);
void prime_remove(int *,int);

int main(){

    int a[5],len,i;

    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Elements ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    print(a,len);
    printf("\n");
    prime_remove(a,len);

    return 0;
}

void prime_remove(int *a,int len){

    int i,j,k,l,m,len2;
    for(i=0;i<len;i++){

        for(j=2;j<a[i];j++){
            if(a[i]%j==0)
            break;
        }
        if(a[i]==j){
            printf(" %d ", a[i]);
            
            for(k=0;k<len;k++){
                
            }


            }
        }
    }
}

void print(int *a,int len){
    int i;
    for(i=0;i<len;i++)
    printf("%d ", a[i]);
}
