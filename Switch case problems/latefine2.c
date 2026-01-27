#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    int days;
    scanf("%d",&days);
    int fee;
    switch(c){
        case 1:
        fee=days*2;
        printf("Late fee : %d",fee);
        break;
        case 2:
        fee=days*5;
        printf("Late fee : %d",fee);
        break;
        default:
        printf("Invalid type");
    }
}