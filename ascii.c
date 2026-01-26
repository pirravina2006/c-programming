#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int ascii=(int)ch;
    if(ascii>=65 && ascii<=90){
        printf("The letter is Uppercase");
    }
    else{
        printf("The letter is lowercase");
    }
    return 0;
}