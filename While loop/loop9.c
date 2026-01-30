#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int cr=0;
    while(i<=n){
        scanf("%d",&a);
        c=c+a;
        if(c>100){
            cr++;
        }
        i++;
    }
    printf("Final beds:%d\n",100);
    printf("Critical hours:%d",cr);
}