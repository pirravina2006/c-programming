#include<stdio.h>
int area(int r){
    float res=(3.14*r)*r;
    printf("%.2f",res);
    return res;
}
int main(){
    int r;
    scanf("%d",&r);
    area(r);
}