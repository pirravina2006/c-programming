#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res=a<b || a>0 || b>0;
    printf("%d",res);
    return 0;
    
}