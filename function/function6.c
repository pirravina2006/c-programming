#include<stdio.h>
int fact(int num){
    int fact=1;
    int rem;
    if(num<=0){
        printf("%d",fact);
    }
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        printf("%d",fact);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    fact(num);
}