#include<stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(int i=1;i<=num1*num2;i++){
        if(num1%i==0){
            if(num2%i==0){
                printf("%d",i);
            }
        }
    }
    return 0;
}