#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int plan;
    int final=0;
    int upi=20;
    char str[10];
    switch(n){
        case 1:
        scanf("%s",&str);
        switch(str=="UPI")
        if(str=="upi"){
            plan=199;
            final=plan-upi;
            printf("%d",final);
        }
        else if(str=="Wallet"||"wallet"||"WALLET"){
            plan=199;
            printf("%d",plan);
        }
        break;
        case 2:
        if(str=="UPI" ||"upi"){
            plan=399;
            final=plan-upi;
            printf("%d",final);
        }
        else if(str=="Wallet"||"wallet"||"WALLET"){
            plan=399;
            printf("%d",plan);
        }
        break;
    }
}