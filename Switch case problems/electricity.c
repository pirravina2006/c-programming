#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int unit;
    scanf("%d",&unit);
    int bill;
    int sub=80;
    if (unit>0 && unit <1000){
        switch(i){
            case 1:
            if(unit<=100){
                bill=unit*3;
            }
            else if(unit>100 && unit<=200){
                bill=((100*3)+(unit-100)*5)-80;
            }
            else{
                bill=((100*3)+(100*5)+(unit-200)*7)-80;
            }
            break;

            case 2:
            if(unit<=100){
                bill=unit*7;
            }
            else{
                bill=(100*7)+(unit-100)*10;
            }
            break;
            default:
            printf("Enter 1 or 2");
        }
        printf("Bill Amount is:%d",bill);
    }
    return 0;
}