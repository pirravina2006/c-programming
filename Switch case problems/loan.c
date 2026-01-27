#include<stdio.h>
int main(){
    int lt;
    scanf("%d",&lt);
    int score;
    scanf("%d",&score);
    switch(lt){
        case 1:
        if(score>=700 && score<900){
            printf("Loan Approved");
        }
        else if(score>650 && score<700){
            printf("Manual review");
        }
        else{
            printf("Rejected");
        }
        break;
        case 2:
        if(score>=700 && score<900){
            printf("Loan Approved");
        }
        
        else{
            printf("Rejected");
        }
        break;
    }
}