#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int mark;
    scanf("%d",&mark);
    switch(type){
        case 1:
        if(mark>=80 && mark<=100){
            printf("Excellent");
        }
        else{
            printf("Not qualified");
        }
        break;
        case 2:
        if(mark>=60 && mark<=100){
            printf("Good");
        }
        else{
            printf("Not qualified");
        }
        break;
        default:
        printf("Need Improvement");
    }
}