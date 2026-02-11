#include<stdio.h>
int power(int a,int b){
    if(b>0 && a>0){
        return a*+power(a,b-1);
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int res=power(a,b);
    printf("%d",res);
    return 0;
}