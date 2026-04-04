#include<stdio.h>
int main(){
    
    int num, ans = 1, i;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        ans = (ans + i) ;
        printf("%d ", ans);
    }

    return 0;
}