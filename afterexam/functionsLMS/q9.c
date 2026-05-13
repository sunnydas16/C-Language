#include<stdio.h>
void del_fun(char *);
int main(){

    char s[100];
    printf("enter the Char ");
    scanf("%s", s);

    del_fun(s);
    printf("%s \n" , s);

    return 0;
}
void del_fun(char *s){

    int i,j,k;
    for(i=0;s[i];i++){
        for(j=i+1;s[j];){
            if(s[i]==s[j]){
                for(k=j;s[k];k++){
                    s[k]=s[k+1];
                }
            }
            else{
                j++;
            }
        }
    }

}