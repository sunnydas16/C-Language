#include<stdio.h>
int main(){

    char s1[5],s2[6],s3[20];

    printf("Elements in S1 And S2 ");
    scanf("%s %s", s1,s2);

    int i,j,k;
    for(i=0,j=0,k=0;s1[i]||s2[j];){
        if(k%2==0){
            s3[k]=s1[i];
            k++;
            i++;
        }
        else{
            s3[k]=s2[j];
            k++;
            j++;
        }
        if(s1[i]=='\0'){
            s3[k]=s2[j];
        }
        if(s2[j]=='\0'){
            s3[k]=s1[i];
        }
        
    }
    s3[k]='\0';

    printf("%s ", s3);

}