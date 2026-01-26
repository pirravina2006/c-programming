#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>0){
        printf("Positive  number");
    }
    else if(num==0){
        printf("Number is Zero");
    }
    else{
        printf("Negative number");
    }
    return 0;
    
}