#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int type;
    scanf("%d",&type);
    

    switch(type){
        case 1:
        if(ch=='R' ||ch=='r'){
            printf("5000");
        }
        else if(ch=='S'|| ch=='s'){
            printf("3000");
        }
        else{
            printf("Invalid character");
        }
        break;
        case 2:
        if(ch=='R'||ch=='r'){
            printf("9000");
        }
        else if(ch=='S'||ch=='s'){
            printf("7000");
        }
        else{
            printf("Invalid character");
        }
        break;
        default:
        printf("Enter 1 or 2");
    }
}