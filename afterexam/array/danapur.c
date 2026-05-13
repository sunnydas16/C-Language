#include<stdio.h>
int main(){

    char arr[5],ch;
    printf("Enter the string");
    scanf("%[^\n]", arr);

    printf("Enter the Char to find ");
    scanf(" %c", &ch);

    int i;

    for(i=0;arr[i];i++){
        if(arr[i]==ch){
            printf("Character is There ");
            return 0;
        }
    }
    printf("Character is Not There ");


    
    return 0;
}