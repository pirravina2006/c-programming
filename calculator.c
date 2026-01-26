#include<stdio.h>
int main(){
    int a=5;
    int b=15;
    char ch;
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        printf("sum is :%d",a+b);
    break;
    case '-':
        printf("Difference is :%d",a-b);
    break;
    case '*':
        printf("Product is :%d",a*b);
    break;
    case '/':
        printf("division is :%d",a/b);
    break;
    case '%':
        printf("Modulo is :%d",a%b);
    break;
    }
}