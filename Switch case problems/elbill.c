#include<stdio.h>
int main(){
    int unit;
    scanf("%d",&unit);
    int bill=0;
    if(unit<=50){
        bill=unit*3;
        printf("%d",bill);
    }
    else if(unit>50 && unit<=100){
        bill=(50*3)+(unit-50)*5;
        printf("%d",bill);
    }
    else{
        bill=(50*3)+(50*5)+(unit-100)*6;
        printf("%d",bill);
    }
    return 0;
}