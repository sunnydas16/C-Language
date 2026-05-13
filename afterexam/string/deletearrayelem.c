#include<stdio.h>
int main(){

    int arr[6],i,del,j,n=6;
    printf("Enter the Element ");
    for(i=0;i<6;i++)
    scanf("%d", &arr[i]);

    for(i=0;i<6;i++)
    printf("%d ",arr[i]);
    printf("\n");

    printf("Enter the elem to del ");
    scanf("%d", &del);

    for(i=0;i<6;i++){
        if(arr[i]==del){
            for(j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }

    for(i=0;i<n;i++)
    printf("%d ", arr[i]);


}
