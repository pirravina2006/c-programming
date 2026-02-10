#include<stdio.h>
int odd(int n){
    if(n%2==0){
        printf("Even number");
    }
    else{
        printf("odd number");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    odd(n);
}