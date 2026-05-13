#include<stdio.h>

void delete_elem(int *,int,int);

int main(){

    int a[5],len,i,del;
    len= sizeof(a)/sizeof(a[0]);

    printf("Entr elem ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);
    printf("Enter the elem to delete ");
    scanf("%d", &del);

    delete_elem(a,len,del);


    return 0;
}
void delete_elem(int *a,int len,int del){

    int i,j,len2;
    len2=len;

    for(i=0;i<len;i++){
        if(a[i]==del){
            len2--;
            for(j=i;j<len;j++){
                a[j]=a[j+1];
            }
            i--;
        }
    }

    for(i=0;i<len2;i++)
    printf("%d ", a[i]);


}