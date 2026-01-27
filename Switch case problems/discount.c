#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int age;
    scanf("%d",&age);
    int amount;
    float dis;
    float tot;
    switch(n){
        case 1:
        if(age<=12){
            int amount=300;
            dis=amount*50/100;
            tot=amount-dis;
            printf("%.0f",tot);
        }
        else if(age>12 && age<65){
            int amount=300;
            printf("%d",amount);
        }
        else{
            int amount=300;
            dis=amount*33/100;
            tot=amount-dis;
            printf("%.0f",tot);
        }
        break;
        case 2:
        if(age<=12){
            int amount=1000;
            dis=amount*50/100;
            tot=amount-dis;
            printf("%.0f",tot);
        }
        else if(age>12 && age<65){
            int amount=1000;
            printf("%d",amount);
        }
        else{
            int amount=1000;
            dis=amount*33/100;
            tot=amount-dis;
            printf("%.0f",tot);
        }
    }
}