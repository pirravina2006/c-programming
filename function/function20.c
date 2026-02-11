#include<stdio.h>
int calculator(int a,int b,char ch){
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default:
        printf("Enter correct symbol");
    }
    return 0;
}
int main(){
    int a,b;
    char ch;
    scanf("%d",&a);
    scanf("\n%d",&b);
    scanf("\n%c",&ch);
    calculator(a,b,ch);
}