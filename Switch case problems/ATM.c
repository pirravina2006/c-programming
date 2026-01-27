#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bal;
    scanf("%d",&bal);
    int wa;
    scanf("%d",&wa);
    switch(n){
        case 1:
        if(bal>=wa){
            printf("Transaction successfull");
        }
        else{
            printf("Insufficient bank balance");
        }
        break;
        case 2:
        if(wa<=5000){
            printf("Transaction is done");
        }
        else{
            printf("Limit exceed");
        }
        break;
        default:
        printf("Invalid pin! type 1 or 2");
    }
}