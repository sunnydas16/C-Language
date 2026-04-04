#include<stdio.h>
int main(){

    // int num;
    // printf("Enter the number til you print fibo : \n");
    // scanf("%d",&num);


    // int num = 32;
    // unsigned char ch = (0xf0)^32;
    // num |= ch|(ch << 8);
    // printf("%x", num);

//     int a=0,b=020,c=-1,d;
// d= (a==0)||(b=2)&&(c=5);
// printf("%d %d %d\n",b,c,d);

    int num, i, ans;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        ans = i * i * i;     // (i*i*i) + 1
        ans = ans + 1;
        printf("%d ", ans);
    }

    return 0;
}