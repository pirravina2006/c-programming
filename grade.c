#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark<=100 && mark>=90){
        printf("Grade A\n");
    }
    else if(mark<90 && mark>=75){
        printf("Grade B\n");
    }
    else if(mark<75 && mark>=50){
        printf("Grade C\n");
    }
    else{
        printf("Fail");
    }
    return 0;
}