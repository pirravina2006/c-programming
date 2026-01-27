#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int amount;
    scanf("%d",&amount);

    float dis;
    float tot;
    switch(n){
        case 1:
            dis=amount*5/100;
            tot=amount-dis;
            printf("%.0f",tot);
        break;
        case 2:
            dis=amount*15/100;
            tot=amount-dis;
            printf("%.0f",tot);
        break;
        default:
        printf("Enter 1 or 2");
    }
}