#include<stdio.h>
void in_fun(int *a, int *b, int *c, int ele1,int ele2,int ele3);
int main(){

    int a[3],b[3],c[6],ele1,ele2,ele3;
    ele1=sizeof(a)/sizeof(a[0]);
    ele2=sizeof(b)/sizeof(b[0]);
    ele3=sizeof(c)/sizeof(c[0]);
    printf("Enter the Array 1 ");
    int i;
    for(i=0;i<ele1;i++)
    scanf("%d", &a[i]);
    printf("Enter the Array 2 ");
    for(i=0;i<ele2;i++)
    scanf("%d", &b[i]);

    in_fun(a,b,c,ele1,ele2,ele3);

    for(i=0;i<ele3;i++)
    printf("%d ", c[i]);


    return 0;
}
void in_fun(int *a, int *b, int *c, int ele1,int ele2,int ele3){

    int k,i,j;
    for(k=0,i=0,j=0;k<ele3;){
        if(k%2==0){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
        if(a[i]<ele1){
            c[k]=b[j];
        }
    }
}