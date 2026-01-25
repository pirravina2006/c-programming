#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res=a<b;
    printf("%d\n",res);

    int c,d;
    scanf("%d %d",&c,&d);
    int res2=d<c;
    printf("%d",res2);
    return 0;
}