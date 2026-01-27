#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    int km;
    scanf("%d",&km);
    switch(c){
        case 1:
        if(km<=30){
            printf("Eligible");
        }
        else{
            printf("Eligible with extra fee");
        }
        break;
        case 2:
        if(km<=30){
            printf("Eligible");
        }
        else{
            printf("Not eligible");
        }
        break;
    }
}
