#include<stdio.h>

int simple(int a,int b,int c){
    int res=(a*b*c)/100;
    return res;
}

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float res=simple(a,b,c);
    printf("%.2f",res);
}