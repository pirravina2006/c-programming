#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int q=a/b;
    int rem=a%b;

    printf("%d %d",q,rem);
    return 0;
}