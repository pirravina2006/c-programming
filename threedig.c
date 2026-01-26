#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=100 && num<=999){
        printf("Number is 3 digit number");
    }
    else{
        printf("Number is not 3 digit number");
    }
    return 0;
    
}