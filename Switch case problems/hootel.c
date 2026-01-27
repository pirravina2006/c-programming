#include<stdio.h>
int main(){
    
    char ch;
    scanf("%c",&ch);
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
        if(ch=='A'){
            printf("2500");
        }
        else if(ch=='B'){
            printf("3000");
        }
        else{
            printf("Invalid character! enter A or B");
        }
        break;
        case 2:
        if(ch=='C'){
            printf("3500");
        }
        else if(ch=='D'){
            printf("4000");
        }
        else{
            printf("Invalid character! enter C or D");
        }
        break;
    }
    return 0;
}