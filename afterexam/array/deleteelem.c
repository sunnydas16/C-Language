#include<stdio.h>
int main(){

    int a[5],len,i,del,j,len2;

    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Elem ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    printf("Enter the Elem to Demleet ");
    scanf("%d", &del);

    printf("Before : ");
    for(i=0;i<len;i++)
    printf(" %d ", a[i]);

    len2 = len;
    for(i=0;i<len;i++){
        if(a[i]==del){
            len2--;
            for(j=i;j<len;j++){
                a[j]=a[j+1];
            }
            i--;
        }
    }

    printf("\n");
    for(i=0;i<len2;i++)
    printf(" %d ", a[i]);


 
    return 0;
}






// #include<stdio.h>

// void del_elem(int *,int);

// int main(){

//     int a[5],len,i;

//     len = sizeof(a)/sizeof(a[0]);
//     printf("Enter the Elems ");
//     for(i=0;i<len;i++)
//     scanf("%d", &a[i]);

//     del_elem(a,len);

//     return 0;
// }

// void del_elem(int *a,int len){

//     int i,j,num,len2;
//     len2 = len; 

//     printf("enter the num to del");
//     scanf("%d", &num);

//     for(i=0;i<len;i++){
//         if(a[i]==num){
//             for(j=i;j<len;j++){
//                 a[j]=a[j+1];
//             }
//             len2--;
//         }
//     }

//     for(i=0;i<len2;i++)
//     printf("%d ", a[i]);

// }