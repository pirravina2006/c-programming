#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    if(m<=1){
        printf("Short interruption");
    }
    else if(m>1 && m<=4){
        printf("Medium interruption");
    }
    else{
        printf("Long interruption");
    }
}