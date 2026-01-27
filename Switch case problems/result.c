#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    int att;
    scanf("%d",&att);
    if(att<75){
        printf("Fail");
    }
    else{
        if(mark>=75 && mark<101){
            printf("Distinction");
        }
        else if(mark>=50 && mark<75){
            printf("Pass");
        }
        else{
            printf("Fail");
        }
    }
}