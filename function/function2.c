#include<stdio.h>
int lar(int a,int b){
    if(a>b){
        printf("%d",a);
    }
    else if(b>a){
        printf("%d",b);
    }
    else if(a==b){
        printf("Both are equal");
    }
    return 0;
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    lar(a,b);
}