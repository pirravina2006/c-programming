#include<stdio.h>
int main(){
    int type;scanf("%d",&type);
    int min;
    scanf("%d",&min);
    switch(type){
        case 1:
        min=min*1;
        printf("%d",min);
        break;
        case 2:
        min=min*3;
        printf("%d",min);
        break;
        case 3:
        min=min*10;
        printf("%d",min);
        break;
        default:
        printf("Enter 1,2 or 3");
    }
}