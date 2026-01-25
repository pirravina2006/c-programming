#include<stdio.h>
int main(){
    //bitwise and operator
    // int a,b;
    // scanf("%d %d",&a,&b);
    // int res=a&b;
    // printf("Bitwise and of a and b is : %d",res);

    // int c,d;
    // scanf("%d %d",&c,&d);
    // int res2=c|d;
    // printf("Bitwise OR of c and d is : %d",res2);

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int res=a^b;
    // printf("Bitwise XOR of a and b is : %d",res);

    int a;
    scanf("%d",&a);
    int res=~a;
    printf("Bitwise NOT of a is : %d",res);
    return 0;
}