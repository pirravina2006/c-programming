#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a/=b;
    printf("%d\n",a);

    int c,d;
    scanf("%d %d",&c,&d);
    c%=d;
    printf("%d",c);
    return 0;
    
}