#include<stdio.h>

void add_elem(int *,int,int,int);

int main(){

    int a[6],len,i,index,val;

    // len=sizeof(a)/sizeof(a[0]);
    len=5;
    printf("Enter the Elem ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);
    printf("Enter the index position ");
    scanf("%d", &index);
    printf("Enter the Value ");
    scanf("%d", &val);

    add_elem(a,len,index,val);


    return 0;
}

void add_elem(int *a,int len,int index,int val){

    int i;
    for(i=len;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=val;

    for(i=0;i<len+1;i++)
    printf("%d ", a[i]);

}
