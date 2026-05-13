#include<stdio.h>
void prime_count_assign(int *,int *,int);
int main(){

    int a[10],pm[10],len,i;

    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the ELements ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    prime_count_assign(a,pm,len);    

    
    return 0;
}

void prime_count_assign(int *a,int *pm,int len){
    int i,j,count=0;
    for(i=0;i<len;i++){
        for(j=2;j<a[i];j++){
            if(a[i]%j==0)
            break;
        }
        if(a[i]==j){
            pm[count]=a[i];
            count++;
            // printf("%d ", a[i]);
        }
    }

    printf("\n");
    printf("Count is %d and prime is : ", count);
    for(i=0;i<count;i++)
    printf("%d ", pm[i]);
}



