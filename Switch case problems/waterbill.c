#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int unit;
    scanf("%d",&unit);
    int bill;
    if (unit>0 && unit <1000){
        switch(i){
            case 1:
            if(unit<=30){
                bill=unit*5;
            }
            else if(unit>30 && unit<=200){
                bill=((30*5)+(unit-30)*8)-10;
            }
            break;

            case 2:
            bill=unit*10;
            break;
            default:
            printf("Enter 1 or 2");
        }
        printf("Bill Amount is:%d",bill);
    }
    return 0;
}