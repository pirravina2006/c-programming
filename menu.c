#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",a+b);
        break;
        case 2:
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",a-b);
        break;
        case 3:
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",a*b);
        break;
        case 4:
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",a/b);
        break;
        case 5:
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",a%b);
        break;
        default:
        printf("Invalid number");
    }
}