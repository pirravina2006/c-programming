#include<stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%d %d",&num1,&num2);
    int final;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0){
            if(num2%i==0){
                final=i;
            }
        }
    }
    printf("%d",final);
}